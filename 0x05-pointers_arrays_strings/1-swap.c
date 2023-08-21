#include "main.h"
/**
 *swap_int - entry point
 *@a: first integer
 *@b: second integer
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
