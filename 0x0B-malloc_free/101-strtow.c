#include <stdlib.h>
#include "main.h"
/**
 * free_space - frees space..
 * @mat_arr: first param.
 * @h: first param.
 */
void free_space(char **mat_arr, size_t h)
{
	if (mat_arr != NULL && h != 0)
	{
		for (h = h; h > 0; h--)
		free(mat_arr[h]);
			free(mat_arr[h]);
		free(mat_arr);
	}
}
/**
 * strtow - splits string into words
 *
 * @str: string to be splited
 * Return: returns a pointer to the string
 */
char **strtow(char *str)
{
	char **words;
	unsigned int c, h, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = h = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
		h++;
	{
		words = malloc((h + 1) * sizeof(char *));
	}
		if (words == NULL || h == 0)
		{
			free(words);
			return (NULL);
		}
	for (i = a1 = 0; i < h; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				words[i] = malloc((c - a1 + 2) * sizeof(char));
				if (words[i] == NULL)
				{
				free_space(words, i);
				return (NULL);
				}
				break;
			}

		}
		for (j = 0; a1 <= c; a1++, j++)
			words[i][j] = str[a1];
		words[i][j] = '\0';
	}
	words[i] = NULL;
	return (words);
}
