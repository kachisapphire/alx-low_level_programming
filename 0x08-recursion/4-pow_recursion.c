#include "main.h"
/**
 *_pow_recursion - entry point
 *@x: first input
 *@y: second input
 *Return: value of x raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
