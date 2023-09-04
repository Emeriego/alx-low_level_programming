#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - This Function duplicates an array of char.
 * @str: first param.
 * Return: returns apointer if succesful.
 */
char *_strdup(char *str)
{
	char *p;
	int i;

	int size = 0;

	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	p = malloc((sizeof(char) * size) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
