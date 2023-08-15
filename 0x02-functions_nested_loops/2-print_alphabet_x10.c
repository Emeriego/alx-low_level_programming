#include "main.h"
/**
 * print_alphabet_x10 - this does what you see.
 *
 * Description: This func does what it does.
 *
 */
void print_alphabet_x10(void)
{
	int c = 0;

	while (c <= 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		c++;
		_putchar('\n');
	}
}
