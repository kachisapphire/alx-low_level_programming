#include "variadic_functions.h"
/**
 *print_numbers - entry point
 *@separator: string to be printed
 *@n: number of elements
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num = 0;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
