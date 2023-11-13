#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a given string for a given char.
 * @s: first param.
 * @accept: second param.
 * Return: returns the length.
 */
char *_strpbrk(char *s, char *accept)
{

	while (*s != '\0')
	{
		int i;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
