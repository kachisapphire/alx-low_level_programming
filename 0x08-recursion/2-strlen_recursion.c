#include "main.h"
/**
 *_strlen_recursion - entry point
 *@s: strinf to print length
 *Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
