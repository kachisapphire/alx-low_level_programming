#include "main.h"
/**
 *_strchr - entry point
 *@c: character to search for
 *@s: string to be searched
 *Return: c or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
