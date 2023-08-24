#include "main.h"
#include <string.h>
/**
 * *_strncpy - This is a custom strncat.
 * @dest: First param.
 * @src: Second param.
 * @n: Third param.
 * Return: returns a pointer.
 */
char *_strncpy(char *dest, char *src, int n)
{

		int slen = 0;

		while (*dest != '\0')
		{
			slen++;
		}

		if (n <= slen)
		{
			while (n > 0)
			{
				dest[n] = src[n];
				n--;
			}
		}
		else
		{
			while (slen < n)
			{
				dest[slen] = '\0';
				slen++;
			}
		}
		return (dest);
}
