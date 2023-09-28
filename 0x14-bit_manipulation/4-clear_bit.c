#include "main.h"
/**
 * clear_bit - sets the value to zero.
 * @n: the number
 * @index: bit location.
 * Return: returns integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t msk;

	msk = 1 << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
    {
        return (-1);
    }
	if (((*n >> index) & 1) == 1)
    {
        *n = msk ^ *n;
    }
	return (1);
}