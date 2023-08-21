#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - This functions resets a value.
 * @str: This is a param.
 */
void puts_half(char *str)
{
	int i, n, l;

	l = strlen(str);
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
		putchar(str[n]);
		n++;
	}
	putchar('\n');
}
