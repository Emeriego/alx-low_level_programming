#include "main.h"
/**
 * *_strncat - This is a custom strncat.
 * @dest: First param.
 * @src: Second param.
 * @n: Third param.
 * Return: returns a pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original = dest;

	while (*dest != '\0')
	{
		dest++;
	}
		int slen = strlen(src);

		if (n <= slen - 1)
		{
			while (n > 0)
			{
				*dest = *src;
				dest++;
				src++;
				n--;
			}
		}
		else
		{
			while (*src != '\0')
			{
				*dest = *src;
				dest++;
				src++;
			}
		}
		*dest = '\0';
		return (original);
}
