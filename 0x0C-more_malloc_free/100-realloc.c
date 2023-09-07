#include "main.h"
#include <stdlib.h>
/**
 * _realloc - This would reallocate a memory block.
 * @ptr: first param.
 * @old_size: second param.
 * @new_size: second param.
 * Return: returns a pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	size_t i, size;
	char *original_ptr = ptr;

	if (ptr == NULL)
	{
		pt = malloc(new_size);
		return (pt);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	pt = malloc(new_size);
	if (pt == NULL)
	{
		return (NULL);
	}
	size = (new_size > old_size) ? old_size : new_size;
	for (i = 0; i < size; i++)
	{
		pt[i] = original_ptr[i];
	}
	free(ptr);
	return (pt);
}
