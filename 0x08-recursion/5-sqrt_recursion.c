#include "main.h"
/**
 * s_root - Recursion is fun.
 * @x: first param.
 * @y: second param.
 * Return: returns square root of n or 0.
 */
int s_root(int x, int y)
{
	if (y * y > x)
	{
		return (-1);
	}
	else if (y * y == x)
	{
		return (y);
	}
	return (s_root(x, y + 1));
}
/**
 * _sqrt_recursion - recursion does not happen here.
 * @n: integer to be rooted.
 * Return: returns the root.
 */

int _sqrt_recursion(int n)
{
	return (s_root(n, 0));
}
