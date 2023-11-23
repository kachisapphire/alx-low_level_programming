#include "main.h"
/**
 *clear_bit - command to execute
 *@n: parameter
 *@index: index to parameter
 *Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
