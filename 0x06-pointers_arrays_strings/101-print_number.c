#include "main.h"
/**
 *print_number - entry point
 *@n: integer to be printed
 *Return: void
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar(45);
		_putchar(i + '0');
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
