#include "main.h"
/**
 * _pow_recursion - Recursion is fun.
 * @x: first param.
 * @y: second param.
 * Return: returns x raise to y or 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
