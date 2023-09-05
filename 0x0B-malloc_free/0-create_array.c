#include "main.h"
#include <stdlib.h>
/**
 **create_array - entry point
 *@c: character to be printed
 *@size: size of array
 *Return: null
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
