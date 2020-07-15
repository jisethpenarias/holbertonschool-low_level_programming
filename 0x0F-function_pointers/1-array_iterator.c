#include "function_pointers.h"

/**
*array_iterator - executes each function given as parameter in the array.
*@array: pointer array.
*@size: zise of array.
*@action: pointer to a function that receives an int argument.
*Return: void.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	/*I defined the variable as an integer but changed it */
	/*to unsigned int*/
	/*size_t is a defined unsigned data type*/
	/*size_t refers to a size and the sizes are */
	/*not negative data, being positive they are unsigned*/

	i = 0;

	if (array == NULL || action == NULL)
		return;
	/*the array is traversed with the iterator*/
	/*this will happen as long as the iterator is less than size*/
	while (i < size)
	{
		/*the function pointer is dereferenced and delivers them*/
		/* to each element[i] in the array*/
		action(array[i]);
		i++;
	}
}
