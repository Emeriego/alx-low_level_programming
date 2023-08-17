#include "main.h"
/**
 * print_numbers - prints numbers.
 * Return: reurns 0 or 1.
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
