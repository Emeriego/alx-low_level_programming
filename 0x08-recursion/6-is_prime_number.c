#include "main.h"
/**
 * prime_recurse - Recursion is fun.
 * @x: first param.
 * @y: second param.
 * Return: returns primr or 0.
 */
int prime_recurse(int x, int y)
{
	if (x <= 1 || (y != x && x % y == 0))
	{
		return (0);
	}
	else if (y == x)
	{
		return (1);
	}
	return (prime_recurse(x, y + 1));
}
/**
 * is_prime_number - recursion does not happen here.
 * @n: integer to be rooted.
 * Return: returns 0.
 */

int is_prime_number(int n)
{
	return (prime_recurse(n, 2));
}
