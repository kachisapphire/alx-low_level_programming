#include "dog.h"
/**
 *init_dog - entry point
 *@d: pointer
 *@name: first input
 *@age: second input
 *@owner: third input
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
