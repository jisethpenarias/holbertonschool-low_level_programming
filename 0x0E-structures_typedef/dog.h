#ifndef DOG
#define DOG
/**
 * struct dog - struct of a dog
 * @name: Dog's name
 * @age: Age of the dog
 * @owner: Dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif