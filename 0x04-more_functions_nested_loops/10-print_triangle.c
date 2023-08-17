#include "main.h"
/**
 * print_triangle - prints upper.
 * @size: A description for param.
 */
void print_triangle(int size)
{
	if (!(size <= 0))
	{
		int height = 0;

		while (height <  size)
		{
			int width = 0;

			while (width < size)
			{
				if (width < size - (height + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				width++;
			}
			_putchar('\n');
			height++;
		}
	}
	else
	{
		_putchar('\n');
	}
}

