#include "main.h"
/**
 * factorial - Recursion is fun.
 * @n: first param.
 * Return: returns fac of n or 0.
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
