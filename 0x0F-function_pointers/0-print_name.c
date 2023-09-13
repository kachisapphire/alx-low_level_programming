 #include "function_pointers.h"
/**
 *print_name - entry point
 *@name: first input
 *@f: second input
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
