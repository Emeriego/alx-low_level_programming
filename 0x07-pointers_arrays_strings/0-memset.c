#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: first param.
 * @b: second param.
 * @n: third param.
 * Return: returns a pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
