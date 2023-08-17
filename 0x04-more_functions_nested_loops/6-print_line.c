#include "main.h"
/**
 * print_line - prints upper.
 * @n: A description for param.
 */
void print_line(int n)
{
	if (!(n <= 0))
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}

