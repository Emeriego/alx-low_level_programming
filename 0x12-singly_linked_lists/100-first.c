#include <stdio.h>

/**
 * printed_before_main - executed before main
 * Return: no return.
 */
void __attribute__ ((constructor)) printed_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
