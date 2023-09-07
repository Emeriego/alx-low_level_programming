#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - This would allocate memory block.
 * @b: first param.
 * Return: returns a pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
