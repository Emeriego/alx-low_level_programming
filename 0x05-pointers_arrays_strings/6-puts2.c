#include "main.h"
#include <string.h>
/**
 * puts2 - This functions resets a value.
 * @s: This is a param.
 */
void puts2(char *s)
{
	int i, l;

	i = 0;
	l = strlen(s);
	while (i < l)
	{
		putchar(s[i]);
		i = i + 2;
	}
	putchar('\n');
}
