#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - entry point
 *@height: first input
 *@width: second input
 *Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **output;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	output = malloc(sizeof(int *) * height);
	if (output == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		output[i] = malloc(sizeof(int) * width);
		if (output[i] == NULL)
		{
			free(output);
			for (j = 0; j < height; j++)
				free(output[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			output[i][j] = 0;
	}
	return (output);
}
