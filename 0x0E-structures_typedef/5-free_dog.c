#include "dog.h"
/**
 *free_dog - entry point
 *@d: first input
 *Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
