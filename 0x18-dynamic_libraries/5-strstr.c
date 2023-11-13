#include "main.h"
#include <stdio.h>
/**
 * _strstr - searches a given string for a given string.
 * @haystack: first param.
 * @needle: second param.
 * Return: returns the pointer.
 */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{

		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
