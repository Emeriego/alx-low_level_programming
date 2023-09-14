#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - This is variadic way of summing args.
 * @n: first arg.
 * Return: returns the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	size_t i;
	int sum;
	va_list my_args;

	va_start(my_args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(my_args, unsigned int);
	}
	return (sum);
}
