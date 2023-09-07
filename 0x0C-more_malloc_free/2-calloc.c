#include "main.h"
#include <stdlib.h>
/**
 * _calloc - This would concatenate string block.
 * @nmemb: first param.
 * @size: second param.
 * Returns: returns a pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	int c;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (c = 0; c <= nmemb; c++)
	{
		ptr[c] = 0;
	}
	return (ptr);
}
