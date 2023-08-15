#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: This program prints all the alphabets.
 * Return: Always returns 0 if success.
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
