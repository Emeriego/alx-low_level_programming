#include <stdio.h>
/**
 * main - print the largest prime factor of the
 * number 612852475143
 * Return: (0)
 */
int main(void)
{
	long int i = 1;
	long int n;

	n = 612852475143;
	while (i <= n)
	{
		if (n % i == 0)
		{
			if (n == i)
			{
				printf("%ld\n", i);
				break;
			}
			n = n / i;
		}
		i++;
	}

	return (0);
}
