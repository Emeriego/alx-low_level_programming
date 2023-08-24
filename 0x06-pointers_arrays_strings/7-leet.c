#include "main.h"
/**
 * leet - This is a custom strncat.
 * @s: First param.
 * Return: returns a pointer to string.
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char alpha[] = "aAeEoOtTlL";
	char digits[] = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = digits[j];
			}
		}
		i++;
	}
	return (s);
}
