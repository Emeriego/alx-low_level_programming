#include "main.h"
#include <string.h>
/**
 * rev_string - This functions resets a value.
 * @s: This is a param.
 */
void rev_string(char *s)
{
	int i, l;
	char tmp;
	
	l = strlen(s);
	for (i = 0; i < l /2; i++)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}
}
