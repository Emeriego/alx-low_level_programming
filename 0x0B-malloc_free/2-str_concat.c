#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - This Function concatenates.
 * @s1: first param.
 * @s2: second param.
 * Return: returns apointer if succesful.
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, k;

	int size_s1 = 0;
	int size_s2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		size_s1++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		size_s2++;
	}
	p = malloc((sizeof(char) * size_s1 +  size_s2) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	k = 0;
	for (j = size_s1; s2[k] != '\0'; j++)
	{
		p[j] = s2[k];
		k++;
	}
	p[size_s1 + size_s2] = '\0';
	return (p);
}
