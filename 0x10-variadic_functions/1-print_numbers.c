#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - This is variadic way of summing args.
 * @separator: first arg.
 * @n: second arg.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t i;
	va_list my_args;

	va_start(my_args, n);
	if (n <= 0)
	{
		return;
	}
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d%s ", va_arg(my_args, unsigned int), *separator);
		}
		printf("%d\n", va_arg(my_args, unsigned int));
	}
	va_end(my_args);
}
