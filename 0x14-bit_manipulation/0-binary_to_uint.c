#include "main.h"
/**
 *binary_to_uint - converts binnar to unit
 *@b: parameter
 *Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		sum = 2 * sum + (b[i] - '0');
	}
	return (sum);
}
