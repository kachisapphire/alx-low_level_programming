#include "main.h"
/**
 *malloc_checked - entry point
 *@b: first input
 *Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
