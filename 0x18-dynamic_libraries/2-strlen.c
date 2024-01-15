#include "main.h"
/**
 *_strlen - entry point
 *@s: character to be checked
 *Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
