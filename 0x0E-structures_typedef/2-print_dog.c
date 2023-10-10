#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Displays info about the Dog
 * @d: Pointer to the Struct dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name : "(nil)");
				printf("Age: %.6f\n", d->age);
				printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
				}
				}
