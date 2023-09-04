#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - This Function creates a 2D memory space.
 * @w: first param.
 * @h: second param.
 * Return: returns a double pointer if succesful.
 */
int **alloc_grid(int w, int h)
{
	int **arr;
	int i, j;

	if (w <= 0 || h <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * h);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < h; i++)
	{
		arr[i] = malloc(sizeof(int) * w);
		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
