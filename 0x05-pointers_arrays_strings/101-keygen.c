#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random keys for
 * Return: Always 0 on Success
**/

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		_putchar(c);
	}
	_putchar(2772 - sum);

	return (0);
}
