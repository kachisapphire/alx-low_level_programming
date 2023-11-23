#include "main.h"
/**
 *get_bit - command to execute
 *@n: first parameter
 *@index: index of parameter
 *Return: 0 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
