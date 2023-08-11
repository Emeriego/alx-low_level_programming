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
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
