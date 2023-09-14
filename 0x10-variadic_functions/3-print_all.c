#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - This is variadic way of printing all args.
 * @format: a const pointer of a const char.
 */
void print_all(const char * const format, ...)
{
	int i, flag;
	char *str;
	va_list my_args;

	va_start(my_args, format);
	i = 0;
	while (format && *format)
	{
		switch (*format)
		{
			case 'i':
				printf("%d", va_arg(my_args, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(my_args, double));
				flag = 0;
				break;
			case 'c':
				printf("%c", va_arg(my_args, int));
				flag = 0;
				break;
			case 's':
				str = va_arg(my_args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (*(format + 1) && flag == 0)
			printf(", ");
		format++;
	}
	printf("\n");
	va_end(my_args);
}
