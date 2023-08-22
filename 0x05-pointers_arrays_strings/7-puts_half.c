#include "main.h"
#include <stdio.h>
/**
 * puts_half - This functions resets a value.
 * @str: This is a param.
 */
void puts_half(char *str)
{
	int n, l;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	if ((l % 2) != 0)
	{
		n = (l - 1) / 2;
	}
	else
	{
		n = l / 2;
	}
	while (n <= l)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
