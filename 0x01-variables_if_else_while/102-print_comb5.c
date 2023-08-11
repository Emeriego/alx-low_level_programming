#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: This program prints combination of three numbers.
 * Return: Always returns 0 if success.
 */
#include <stdio.h>
int main(void)
{
	int i = 0;

	while (i < 100)
	{
		int c = i + 1;

		while (c < 100)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
			if (i != 99 || c != 99)
			{
				putchar(',');
				putchar(' ');
			}
			c++;
		}
		i++;
	}
	putchar(',');
	return (0);
}
