#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_sign - this does what you see.
 * @n: The character to be checked.
 *
 * Description: This func does what it does.
 * Return: returns 1 if success but 0 if false.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
