#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - compares intgers.
 *
 * @array: array containing values to be worked on.
 * @size: size of array..
 * @cmp: pointer to function to be executed.
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		return (-1);
	}
}
