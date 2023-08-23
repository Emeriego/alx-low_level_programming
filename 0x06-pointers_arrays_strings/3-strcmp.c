#include "main.h"
#include <string.h>
/**
 * _strcmp - This is a custom strncat.
 * @s1: First param.
 * @s2: Second param.
 * Return: returns a pointer.
 */
char _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (s1[i] != '\0' && diff == 0)
	{
		diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}
