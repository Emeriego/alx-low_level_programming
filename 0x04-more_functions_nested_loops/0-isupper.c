#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - prints upper.
 * @c: character to be converted.
 * Return: reurns 0 or 1.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

