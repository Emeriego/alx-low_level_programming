#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: This program prints combination of three numbers.
 * Return: Always returns 0 if success.
 */
int main(void)
{
	int i = 0;

	while (i <= 7)
	{
		int j = i + 1;

		while (j <= 8)
		{
			int k = j + 1;

			while (k <= 9)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		putchar('\n');
		i++;
	}
	return (0);
}
