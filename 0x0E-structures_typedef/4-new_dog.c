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
	int i = 0;
	int j = 0;
	dog_t *conchi_pointer;

	conchi_pointer = malloc(sizeof(dog_t));
	if (conchi_pointer == NULL)
		return (NULL);
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	conchi_pointer->name = malloc((i + 1) * sizeof(char));
	conchi_pointer->owner = malloc((j + 1) * sizeof(char));
	if (conchi_pointer->name == NULL || conchi_pointer->owner == NULL)
	{
		free(conchi_pointer->name);
		free(conchi_pointer->owner);
		free(conchi_pointer);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		conchi_pointer->name[i] = name[i];
	conchi_pointer->name[i] = name[i];
	j = 0;
	for (j = 0; owner[j] != '\0'; j++)
		conchi_pointer->owner[j] = owner[j];
	conchi_pointer->owner[j] = owner[j];
	conchi_pointer->age = age;
	return (conchi_pointer);
}
