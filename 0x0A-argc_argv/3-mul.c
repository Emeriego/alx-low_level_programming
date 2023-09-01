#include <stdio.h>
/**
 * main - Entry point.
 * @argc: aregument count.
 * @argv: array of arguments.
 * Return: returns 0.
 */
int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a = argv[1];
		int b = argv[2];
		int mul = a * b;

		printf("%s\n", mul);
	}

}
