#include "main.h"
/**
 * rot13 - This is a custom strncat.
 * @s: First param.
 * Return: returns a pointer to string.
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
