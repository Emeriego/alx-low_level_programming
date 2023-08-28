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
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
