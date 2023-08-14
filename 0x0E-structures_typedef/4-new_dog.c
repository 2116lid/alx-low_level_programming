#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i1 = 0, j2 = 0;
	dog_t *ptr;

	i1 = strlen(name);
	j2 = strlen(owner);

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(sizeof(char) * (i1 + 1));

	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->owner = malloc(sizeof(char) * (j2 + 1));

	if (ptr->owner == NULL)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}

	strcpy(ptr->name, name);
	strcpy(ptr->owner, owner);
	ptr->age = age;

	return (ptr);
}
