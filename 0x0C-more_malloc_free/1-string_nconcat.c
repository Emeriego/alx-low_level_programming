#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - This would concatenate string block.
 * @s1: first param.
 * @s2: second param.
 * @n: third param.
 * Return: returns a pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int c, len;
	unsigned int len_s1, len_s2, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (c = 0; s1[c] != '\0'; c++)
		len_s1++;
	for (c = 0; s2[c] != '\0'; c++)
		len_s2++;
	len = n >= len_s2 ? (len_s1 + len_s2 + 1) : (len_s1 + n + 1);
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	for (c = 0; c < len_s1; c++)
	{
		str[k] = s1[c];
		k++;
	}
	if (n >= len_s2)
	{
		for (c = 0; c < len_s2; c++)
		{
			str[k] = s2[c];
			k++;
		}
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			str[k] = s2[c];
			k++;
		}
	}
	str[k++] = '\0';
	return (str);
}
