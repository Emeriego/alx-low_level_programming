#include "main.h"
/**
 * print_square - prints upper.
 * @size: A description for param.
 */
void print_square(int size)
{
	if (!(size <= 0))
	{
		int height = size;

		while (height > 0)
		{
			int width = size;

			while (width > 0)
			{
				_putchar('#');
				width--;
			}
			_putchar('\n');
			height--;
		}
	}
	else
	{
		_putchar('\n');
	}
}

