#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - compares intgers.
 *
 * @array: array containing values to be worked on.
 * @size: size of array..
 * @cmp: pointer to function to be executed.
 * Return: returns index.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		return (-1);
	}
	return (-1);
}
