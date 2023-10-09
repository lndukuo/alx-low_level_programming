#include <stdlib.h>
#include "dog.h"
#include "main.h"
/**
 * init_dog - Initializes the Var of type struct dog
 * @d: Pointer to the struct dog
 * @name: The Dog's Name
 * @age: Dog's age
 * @owner: Dog's Owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
