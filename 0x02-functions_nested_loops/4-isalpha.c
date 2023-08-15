#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - this does what you see.
 * @c: The character to be checked.
 *
 * Description: This func does what it does.
 * Return: returns 1 if success but 0 if false.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
