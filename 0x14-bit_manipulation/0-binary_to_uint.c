#include "main.h"
/**
 *binary_to_uint - converts binnar to unit
 *@b: parameter
 *Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, sum = 0, p = 1, length;
	int ba = 2;

	if (b == NULL)
		return (0);
	for (length = 0, b[length] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1')
			return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
		for (j = length - 1; j > 0; j--)
		p = p * ba;
		sum = sum + (p * (b[i] - 48));
		length--;
		p = 1;
	}
	return (sum);
}
