#include "main.h"
#include <stdio.h>
/**
 * print_buffer - This is a custom strncat.
 * @b: First param.
 * @size: Another param.
 */
void print_buffer(char *b, int size)
{
	int c, j, i;

	c = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (c < size)
	{
		j = size - c < 10 ? size - c : 10;
		printf("%08x: ", c);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + c + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int x = *(b + c + i);

			if (x < 32 || x > 132)
			{
				x = '.';
			}
			printf("%c", x);
		}
		printf("\n");
		c = c + 10;
	}
}
