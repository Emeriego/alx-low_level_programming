#include <stdlib.h>
#include "main.h"
/**
 * create_array - This Function creates an array of char.
 * @size: first param.
 * @c: second param.
 * Return: returns apointer if succesful.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
