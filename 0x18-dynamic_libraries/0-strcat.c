#include "main.h"
/**
 * *_strcat - This is a custom strcat.
 * @dest: First param.
 * @src: Second param.
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	char *original = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (original);
}
