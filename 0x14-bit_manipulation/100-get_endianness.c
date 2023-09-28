#include "main.h"
/**
 * get_endianness - gets the endianness.
 * Return: returns 0 if big endian, 1 if little.
*/
int get_endianness(void)
{
    size_t a = 1;
    unsigned char *s;

    s = (unsigned char *)&a;
    return ((int)*s);
}
