#include "main.h"
#include <stdio.h>
/**
 * puts_half - This functions resets a value.
 * @str: This is a param.
 */
void puts_half(char *str)
{
	int n, l, i;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}
	n = (l - 1) / 2;
	for (i = (n + 1); i < l; i++)
	{
		_putchar(str[i]);

	}
	_putchar('\n');
}
