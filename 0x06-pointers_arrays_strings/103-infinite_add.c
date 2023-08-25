#include "main.h"
#include <string.h>
/**
 * infinite_add - This adds infinite numbers.
 * @n1: First param.
 * @n2: Second param.
 * @r: Third param.
 * @size_r: Fourth param.
 * Return: Returns the pointer to result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int x_n1 = strlen(n1) - 1;
	int x_n2 = strlen(n2) - 1;
	int x_result = size_r - 1;

	if (size_r <= 0)
	{
		return (0);
	}
	r[x_result] = '\0';
	while (x_n1 >= 0 || x_n2 >= 0 || carry > 0)
	{
		int digit_n1 = (x_n1 >= 0) ? n1[x_n1] - '0' : 0;
		int digit_n2 = (x_n2 >= 0) ? n2[x_n2] - '0' : 0;
		int sum = digit_n1 + digit_n2 + carry;

		carry = sum / 10;
		int digit_sum = sum % 10;

		if (x_result <= 0)
		{
			return (0);
		}
		r[--x_result] = digit_sum + '0';
		x_n1--;
		x_n2--;
	}
	return (&r[x_result]);
}
