#include "main.h"
/**
 * main - Entry point.
 *
 * Description: This func does what it does.
 * Return: returns 0.
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
