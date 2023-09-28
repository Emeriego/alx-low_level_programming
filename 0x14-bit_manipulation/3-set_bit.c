#include "main.h"
/**
 * set_bit - sets the bit.
 * @n: pointer to the bit.
 * @index: position of the bit to be manipulated
 * Return: returns 1 on success.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int msk = 1;

	if (index > sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	msk = msk << index;
	*n = ((*n) | msk);
	return (1);
}
