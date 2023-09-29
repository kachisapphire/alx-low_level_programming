#include "main.h"
/**
 *get_endianness - function to execute
 *Return: integer
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *bit = (char *)&x;

	if (*bit == 1)
	{
		return (1);
	}
	else
		return (0);
}
