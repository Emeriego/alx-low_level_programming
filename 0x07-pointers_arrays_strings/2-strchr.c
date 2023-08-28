#include "main.h"
#include <stdio.h>
/**
 * _strchr - searches a given string for a given char.
 * @s: first param.
 * @c: second param.
 * Return: returns a pointer.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s >= '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
