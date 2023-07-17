#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the detaild of dog
 *
 * @d: contains the dog details
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nill)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nill)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
