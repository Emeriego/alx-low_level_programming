#include "main.h"
#include <string.h>
/**
 * string_toupper - This is a custom strncat.
 * @s: First param.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
