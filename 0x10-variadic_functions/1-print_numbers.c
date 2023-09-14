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
	unsigned int i, arr;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(args, const unsigned int);
		printf("%d", arr);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
