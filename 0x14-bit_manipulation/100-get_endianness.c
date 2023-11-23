#include "main.h"
/**
 *get_endianness - command to execute
 *Return: int
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *b = (char *)&i;

	if (*b == 1)
	{
		return (1);
	}
	else
		return (0);
}
