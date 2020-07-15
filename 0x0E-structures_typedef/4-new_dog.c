#include "dog.h"
#include <stdio.h>
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
	if (conchi_pointer->name == NULL)
		return (NULL);

	conchi_pointer->age = age;
	conchi_pointer->owner = strdup(owner);
	if (conchi_pointer->owner == NULL)
		return (NULL);

	return (conchi_pointer);
}
