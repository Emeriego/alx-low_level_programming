#include "main.h"
/**
 * rot13 - This is a custom strncat.
 * @s: First param.
 * Return: returns a pointer to string.
 */
char *rot13(char *s)
{
	int i = 0;
	int j;
	char alpha[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char rot13[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	while (s[i] != '\0')
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
