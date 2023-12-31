#include "main.h"
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

	if (n < 0)
	{
		n = -n;
	}

	a = n % 10;
	if (a < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}
