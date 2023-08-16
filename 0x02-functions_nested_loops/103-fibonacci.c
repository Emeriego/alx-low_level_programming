#include <stdio.h>
/**
 * main - this does what you see.
 *
 * Description: This func does what it does.
 * Return: returns 1 if success but 0 if false.
 */
int main(void)
{
	int c;
	unsigned long int x;
	unsigned long int y;
	unsigned long int next;
	unsigned long int sum;

	x = 1;
	y = 2;
	sum = 0;

	for (c = 1; c <= 33; ++c)
	{
		if (x < 4000000 && (x % 2) == 0)
		{
			sum = sum + x;
		}
		next = x + y;
		x = y;
		y = next;
	}

	printf("%lu\n", sum);

	return (0);
}
