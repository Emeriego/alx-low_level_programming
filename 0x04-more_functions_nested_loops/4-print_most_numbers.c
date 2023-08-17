#include "main.h"
/**
 * _isupper - prints upper.
 * @c: character to be converted.
 * Return: reurns 0 or 1.
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
		n++;
	}
	_putchar('\n');
}

