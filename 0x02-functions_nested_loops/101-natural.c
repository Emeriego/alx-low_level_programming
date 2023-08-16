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
	int sum = 0;

	for (c = 0; c < 1024; c++)
	{
		if ((c % 3) == 0 || (c % 5) == 0)
			sum += c;
	}

	printf("%d\n", sum);

	return (0);
}
