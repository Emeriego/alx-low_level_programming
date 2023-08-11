#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: This program prints all the alphabets.
 * Return: Always returns 0 if success.
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

