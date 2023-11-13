#include "main.h"
#include <stdio.h>
/**
 * _strspn - searches a given string for a given char.
 * @s: first param.
 * @accept: second param.
 * Return: returns the length.
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0;

	while (*s != '\0')
	{
		int accepted = 0;
		int i;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				accepted = 1;
				break;
			}
		}
		if (accepted == 1)
		{
			len++;
		}
		else
		{
			break;
		}
		s++;
	}
	return (len);
}
