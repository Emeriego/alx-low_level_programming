#include "main.h"
/**
 * print_diagonal - prints upper.
 * @n: A description for param.
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	while (i < n)
	{
		if (n > 1)
		{
			j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
