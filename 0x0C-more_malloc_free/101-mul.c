#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * is_num - checks if a string contains a non-digit char
 * @s: string to be tested
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_num(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * _getlen - returns length.
 * @s: string to be tested
 *
 * Return: the length of the string
 */
int _getlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * err - will handle  errors
 */
void err(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - Entry point, multiplies two positive numbers
 * @argc: Arguments count
 * @argv: array of arguments
 *
 * Return: always 0 if success
 */
int main(int argc, char *argv)
{
	char *s1, *s2;
	int carry, digit1, digit2, *result, len1, len2, len, c,  a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_num(s1) || !is_num(s2))
		err();
	len1 = _getlen(s1);
	len2 = _getlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (c = 0; c <= len1 + len2; c++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _getlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (c = 0; c < len - 1; c++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[c] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
