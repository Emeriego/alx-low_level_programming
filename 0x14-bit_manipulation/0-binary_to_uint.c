#include "main.h"
/**
 * binary_to_uint - Converts binary to decimal.
 * @b: binary to be converted.
 * Return: returns the decimal.
*/
unsigned int binary_to_uint(const char *b)
{
	size_t i, j, dec, p, len;
	int bin = 2;

	i = 0;
	j = 0;
	dec = 0;
	len = 0;
	p = 1;

	if (!b)
	{
		return (0);
	}
	while (b[len] != '\0')
		len++;
	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - '0');
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = len - 1; j > 0; j--)
			p = p * bin;
		dec = dec + (p * (b[i] - '0'));
		len--;
		p = 1;
		i++;
	}
	return (dec);
}
