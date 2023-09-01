#include <stdio.h>
/**
 * main - Entry point.
 * @argc: aregument count.
 * @argv: array of arguments.
 * Return: returns 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int mul = a * b;

		printf("%s\n", mul);
}
