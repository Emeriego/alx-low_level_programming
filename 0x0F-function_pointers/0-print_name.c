#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - calls a function passed into it.
 * @name: name to be printed.
 * @f: pointer to function to be called.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
