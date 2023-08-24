#include "main.h"
/**
 * _strncat - This is a custom strncat.
 * @dest: First param.
 * @src: Second param.
 * @n: Third param.
 * Return: returns a pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original = dest;
	int slen = 0;

	while (*src != '\n')
	{
		slen++;
		src++;
	}

	while (*dest != '\0')
	{
		dest++;
	}
	src = src - slen;

	if (n <= slen)
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
