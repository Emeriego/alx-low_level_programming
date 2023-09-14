#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sum of two numbers
 * @a: number to be added
 * @b: second number
 *
 * Return: returns sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 *
 * Return: returns the difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: returns product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: result of division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulus of a and b.
 * @a: first number
 * @b: second number
 *
 * Return: remainder of the division of the numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
