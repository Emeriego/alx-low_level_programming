#include "main.h"
/**
 * flip_bits - sets the value to zero.
 * @n: the number
 * @m: second param.
 * Return: returns integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c = 0;
	unsigned long int x_result = n ^ m;

	while (x_result > 0)
	{
		if ((x_result & 1) == 1)
			c++;
		x_result = x_result >> 1;
	}
	return (c);
}
