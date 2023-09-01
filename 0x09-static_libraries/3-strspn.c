#include "main.h"
/**
 *_strspn - entry point
 *@s: string to be checked
 *@accept: substring to be checked
 *Return: number of characters matched
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
