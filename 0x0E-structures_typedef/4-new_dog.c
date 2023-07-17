#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new_dogg
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dogg;

	new_dogg = (dog_t *)malloc(sizeof(dog_t));
	if (new_dogg == NULL)
		return (NULL);

	new_dogg->name = strdup(name);
	if (new_dogg->name == NULL)
	{
		free(new_dogg);
		return (NULL);
	}

	new_dogg->owner = strdup(owner);
	if (new_dogg->owner == NULL)
	{
		free(new_dogg->name);
		free(new_dogg);
		return (NULL);
	}

	new_dogg->age = age;

	return (new_dogg);
}
