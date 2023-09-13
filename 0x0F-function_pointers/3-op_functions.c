#include "3-calc.h"
/**
 *op_add - entry point
 *@a: first input
 *@b: second input
 *Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - entry point
 *@a: first input
 *@b: second input
 *Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - entry point
 *@a: first input
 *@b: second input
 *Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - entry point
 *@a: first input
 *@b: second input
 *Return: div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - entry poin
 *@a: first input
 *@b: second input
 *Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
