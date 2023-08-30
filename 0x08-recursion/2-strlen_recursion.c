#include "main.h"
/**
 * _strlen_recursion - Recursion is fun.
 * @s: first param.
 * Return: returns lenght or 0.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
