#include "main.h"
/**
 * get_strlen - Recursion is fun.
 * @s: second param.
 * Return: returns string len or 0.
 */
int get_strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + get_strlen(s + 1));
	}
}
/**
 * comp_str_halfs - recursion does not happen here.
 * @s: string to be checked.
 * @h1: leftmost half of string.
 * @h2: rightmost half of string.
 * Return: returns 0.
 */
int comp_str_halfs(char *s, int h1, int h2)
{
	if (*(s + h1) == *(s + h2))
	{
		if (h1 == h2 || h1 == h2 + 1)
		{
			return (1);
		}
		return (comp_str_halfs(s, h1 + 1, h2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - recursion does not happen here.
 * @s: string to be checked.
 * Return: returns 0.
 */
int is_palindrome(char *s)
{
	int len = get_strlen(s) - 1;

	if (*s == '\0')
	{
		return (1);
	}
	return (comp_str_halfs(s, 0, len));
}
