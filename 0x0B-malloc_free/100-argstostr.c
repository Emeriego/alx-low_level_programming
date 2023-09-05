#include <stdlib.h>
#include "main.h"
/**
 * argstostr - This Function concatenates.
 * @ac: first param.
 * @av: second param.
 * Return: returns a pointer.
 */
char *argstostr(int ac, char **av)
{
	char **str;
	int i, j;
	int k = 0;
	int len = 0;


	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k++] = '\n';
	}
	return (str);	


}
