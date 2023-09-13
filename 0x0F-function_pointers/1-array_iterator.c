#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes the funcion passed into
 * with the parameters passed into it.
 *
 * @array: array containing values to be worked on.
 * @size: size of array..
 * @action: pointer to function to be executed.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
