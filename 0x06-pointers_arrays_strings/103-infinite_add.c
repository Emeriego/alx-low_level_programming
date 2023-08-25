#include "main.h"

/**
 * reverse_string - reverse array
 * @number: integer params
 * Return: 0
 */

void reverse_string(char *number)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (*(number + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		tmp = *(number + j);
		*(number + j) = *(number + i);
		*(number + i) = tmp;
	}
}

/**
 * infinite_add - adds 2 infinite numbers together
 * @n1: 1st number to add
 * @n2: 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to result of addition
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, i = 0, j = 0, digits = 0;
	int x_n1 = 0, x_n2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || carry == 1)
	{
		if (i < 0)
			x_n1 = 0;
		else
			x_n1 = *(n1 + i) - '0';
		if (j < 0)
			x_n2 = 0;
		else
			x_n2 = *(n2 + j) - '0';
		temp_tot = x_n1 + x_n2 + carry;
		if (temp_tot >= 10)
			carry = 1;
		else
			carry = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	reverse_string(r);
	return (r);
}
