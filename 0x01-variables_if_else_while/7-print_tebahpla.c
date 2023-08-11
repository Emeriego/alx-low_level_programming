#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: This program prints all the alphabets.
 * Return: Always returns 0 if success.
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
