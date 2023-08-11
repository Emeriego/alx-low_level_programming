#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - My Entry Point.
 *
 * Description: This program tell if n is negative, positive or zero.
 * Return: This would return 0 if the code is successful.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
