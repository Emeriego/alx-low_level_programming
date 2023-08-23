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


		if (strcmp(s1, s2) == 0)
		{
			return (0);
		}
		else if (strcmp(s1, s2) < 0)
		{
			return (-1);
		}
		else
		{
			return (1);
		}
}
