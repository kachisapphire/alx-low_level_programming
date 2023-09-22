#include "lists.h"
void printbefore(void) __attribute__((constructor));
/**
 *printbefore - function that prints before main
 *Return: void
 */
void printbefore(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
