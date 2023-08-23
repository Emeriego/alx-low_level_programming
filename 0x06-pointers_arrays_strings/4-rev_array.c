#include "main.h"
#include <string.h>
/**
 * reverse_array - This is a custom strncat.
 * @a: First param.
 * @n: Second param.
 * Return: returns a pointer.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;
	int size = n - 1;

	while (i < size)
	{
		tmp = a[i];
		a[i] = a[size];
		a[size] = tmp;
		size--;
		i++;
	}
}
