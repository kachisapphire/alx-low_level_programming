#include "main.h"
/**
 *print_binary - entry point
 *@n: integer
 *REturn: void
 */
void print_binary(unsigned long int n)
{
	int i, sum = 0;
	unsigned long int count;

	for (i = 63; i >= 0; i--)
	{
		count = n >> i;
		if (count & 1)
		{
			_putchar('1');
			sum++;
		}
		else if (sum)
			_putchar('0');
	}
	if (!sum)
		_putchar('0');
}
