#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * times_table - this does what you see.
 *
 * Description: This func does what it does.
 * Return: returns 1 if success but 0 if false.
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			z = y * x;
			if (y == 0)
			{
				_putchar(z + '0');
			}

			if (z < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			} else if (z >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
