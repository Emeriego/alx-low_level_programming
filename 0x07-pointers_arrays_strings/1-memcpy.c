#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory to another memory raw.
 * @dest: first param.
 * @src: second param.
 * @n: third param.
 * Return: returns a pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
