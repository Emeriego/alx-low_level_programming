#include "main.h"
/**
 * get_bit - get the value of a bit at idx
 * @index: index of the bit.
 * @n: number.
 * Return: returns 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t i = 0;

	if (index > sizeof(size_t) * 8)
	{
		return (-1);
	}
	while (i < index)
	{
		n = n >> 1;
		i++;
	}
	return ((n & 1));
}
