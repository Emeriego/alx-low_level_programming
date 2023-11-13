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
	int len = 0;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[len + i] = src[i];
	}


	return (dest);
}
