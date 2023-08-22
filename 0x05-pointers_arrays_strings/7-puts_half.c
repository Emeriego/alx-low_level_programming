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
	n = (l - 1) / 2;
	while ((n + 1) < l)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
