#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - This is variadic way of printing string args.
 * @separator: first arg.
 * @n: second arg.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);

			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(args);
}
