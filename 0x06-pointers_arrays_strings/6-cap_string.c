#include "main.h"
#include <string.h>
/**
 * cap_string - This is a custom strncat.
 * @s: First param.
 * Return: returns a pointer.
 */
char *cap_string(char *s)
{
	char *original = s;
	int i = 0;
	char sep[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] <= 'z' && s[i] >= 'a')
		{
			s[i] = s[i] - 32;
		}
		else
		{
			int j = 0;

			while (sep[j] != '\0')
			{
				if (sep[j] == s[i] && (s[i + 1] <= 'z' && s[i + 1] >= 'a'))
				{
					s[i + 1] = s[i + 1] - 32;
				}
				j++;
			}
		}
		i++;
	}
	return (s);
}
