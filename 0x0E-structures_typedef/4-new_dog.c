#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* new_dog - creates a new dog
* @name: name
* @age: age
* @owner: owner
* Return: void.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *conchi_pointer;

	conchi_pointer = malloc(sizeof(dog_t));
	if (conchi_pointer == NULL)
		return (NULL);

	conchi_pointer->name = strdup(name);
	conchi_pointer->age = age;
	conchi_pointer->owner = strdup(owner);

	if (conchi_pointer->owner == NULL || conchi_pointer->name == NULL)
	{
		free(conchi_pointer->owner);
		free(conchi_pointer->name);
		free(conchi_pointer);
		return (NULL);
	}

	return (conchi_pointer);
}
