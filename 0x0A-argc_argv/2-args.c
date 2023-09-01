#include <stdio.h>
/**
 * main - Entry point.
 * @argc: aregument count.
 * @argv: array of arguments.
 * Return: returns 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
