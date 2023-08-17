#include "main.h"
/**
 * print_triangle - prints upper.
 * @size: A description for param.
 */
void print_triangle(int size)
{
	if (!(size <= 0))
	{
		int height = size;

		while (height > 0)
		{
			int width = size;

			while (width > 0)
			{
				if (width < size - (height + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
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

