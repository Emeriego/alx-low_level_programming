#include "main.h"
#include <string.h>
/**
 * _atoi - This functions resets a value.
 * @s: This is a param.
 * Return: returns a value.
 */
int _atoi(char *s)
{
	unsigned int c = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + c) != '\0')
	{
		if (size > 0 && (*(s + c) < '0' || *(s + c) > '9'))
			break;

		if (*(s + c) == '-')
			pn *= -1;

		if ((*(s + c) >= '0') && (*(s + c) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		c++;
	}

	for (i = c - size; i < c; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
