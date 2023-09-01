#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _abs - this does what you see.
 * @n: The character to be checked.
 *
 * Description: This func does what it does.
 * Return: returns 1 if success but 0 if false.
 */
int _abs(int n)
{

	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
