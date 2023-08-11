#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: This program prints hexadecimals.
 * Return: Always returns 0 if success.
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		int x = 0;

		while (x <= 9)
		{
			if (!(i == x) && (i < x))
			{
				putchar(i + '0');
				putchar(x + '0');
				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			x++;
		}
		putchar('\n');
		i++;
	}
	return (0);
}

