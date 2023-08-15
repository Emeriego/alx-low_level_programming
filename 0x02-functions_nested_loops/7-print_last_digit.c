#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - this does what you see.
 * @n: The character to be checked.
 *
 * Description: This func does what it does.
 * Return: returns 1 if success but 0 if false.
 */
int print_last_digit(int n)
{
	int a;
	n = abs(n);

	if (n > 99)
	{
		a = ((n / 100) / 10) % 10;
	}
	else if (n > 999)
	{
		a = (((n / 1000) / 100) / 10) % 10;
	}
	else
	{
		a = n % 10;
	}
	_putchar(a + '0');
	return (0);
}
