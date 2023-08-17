#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - prints digits.
 * @c: character to be converted.
 * Return: reurns 0 or 1.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

