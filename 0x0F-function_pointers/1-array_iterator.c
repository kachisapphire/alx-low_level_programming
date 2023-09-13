#include "function_pointers.h"
/**
 *array_iterator - entry point
 *@array: array of elements
 *@size: size of array
 *@action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
