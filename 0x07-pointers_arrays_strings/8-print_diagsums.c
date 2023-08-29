#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - entry point
 *@a: array
 *@size: length of array
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;

	sum 1 = 0;
	sum 2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum 1 = sum 1 + a[i];
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		sum 2 = sum 2 + a[j];
	printf("%d, %d\n", sum 1, sum 2);
}
