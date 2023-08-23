#include "main.h"
#include <string.h>
/**
 * *_strcat - This is a custom strcat.
 * @dest: First param.
 * @src: Second param.
 */
char *_strcat(char *dest, char *src)
{
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
}
