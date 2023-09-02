#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point.
 * @argc: aregument count.
 * @argv: array of arguments.
 * Return: returns 0.
 */
int main(int argc, char *argv[])
{
	int a, i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		a = atoi(argv[i]);
		sum = sum + a;
	}
	printf("%d\n", sum);
	return (0);
}
