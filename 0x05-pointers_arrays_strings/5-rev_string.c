#include "main.h"
/**
 *rev_string - entry point
 *@s: string to be reversed
 *Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (s[j++])
		i++;
	for (j = i - 1; j >= i / 2; j--)
	{
		tmp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = tmp;
	}
}
