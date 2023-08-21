#include "main.h"
#include <string.h>
/**
 * print_rev - This functions resets a value.
 * @s: This is a param.
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
