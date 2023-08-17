#include "main.h"
/**
 * more_numbers - prints numbers.
 */
void more_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		int c = 0;

		while (c <= 14)
		{
			if (c >= 10)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
			c++;
		}
		_putchar('\n');
		n++;
	}
}

