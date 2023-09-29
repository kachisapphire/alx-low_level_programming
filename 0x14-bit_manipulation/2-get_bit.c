#include "main.h"
/**
 *get_bit - main point
 *@index: index of n
 *@n: integer
 *Return: index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
