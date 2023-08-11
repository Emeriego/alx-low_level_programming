#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: This program prints all the digits.
 * Return: Always returns 0 if success.
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
