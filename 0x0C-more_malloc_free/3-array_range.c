#include "main.h"
#include <stdlib.h>
/**
 * array_range - This would create an array block.
 * @min: first param.
 * @max: second param.
 * Return: returns a pointer.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int c, len;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < len; c++)
	{
		ptr[c] = min;
		min++;
	}
	return (ptr);
}
