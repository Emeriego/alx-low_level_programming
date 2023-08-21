#include "main.h"
#include <string.h>
/**
 * print_array - This functions resets a value.
 * @a: This is a param.
 * @n: This is a param.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
