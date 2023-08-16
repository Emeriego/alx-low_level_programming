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
	unsigned long f1 = 0;
	unsigned long f2 = 1;
	unsigned long sum;

	for (c = 0; c < 50; c++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
