#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for owner of dog
 * Return: pointer to a new dog of type dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameL, ownerL, i;
	dog_t *dog;

	d1 = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	nameL = ownerL = 0;
	while (name[nameL++])
		;
	while (owner[ownerL++])
		;
	dog->name = malloc(nameL * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= nameL; i++)
		dog->name[i] = name[i];
	dog->age = age;
	dog->owner = malloc(ownerL * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= ownerL; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
