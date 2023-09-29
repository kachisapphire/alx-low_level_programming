#include "main.h"
/**
 *set_bit - main function
 *@n: integer
 *@index: index of n
 *Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
