#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * jack_bauer - this does what you see.
 *
 * Description: This func does what it does.
 * Return: returns 1 if success but 0 if false.
 */
void jack_bauer(void)
{
	int x;
	int y;

	c = 0;

	while (c < 24)
	{
		x = 0;
		while (x < 60)
		{
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			_putchar(':');
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar('\n');
			x++;
		}
		c++;
	}
}
