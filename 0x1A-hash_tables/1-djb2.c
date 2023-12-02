#include "hash_tables.h"

/**
 * hash_djb2 - hashed function implements the djb2 algorithm.
 * @str: String to be hashed.
 *
 * Return: returns calculated hashed => hashed * 33 + chr.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashed;
	int chr;

	hashed = 5381;
	while ((chr = *str++))
		hashed = ((hashed << 5) + hashed) + chr;

	return (hashed);
}
