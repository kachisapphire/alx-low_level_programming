#include "main.h"
/**
 *cap_string - entry point
 *@s: string to be printed
 *Return: s
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char c[] = {32, '\t', '\n', 33, 34, 40, 41, 44, 46, 59, '}', '{', 63};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; c[j] != '\0'; j++)
		{
			if (c[j] == s[i] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
