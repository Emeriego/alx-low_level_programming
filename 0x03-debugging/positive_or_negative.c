#include <stdio.h>

/**
 * main - My Entry Point.
 *
 * Description: This program tell if n is negative, positive or zero.
 * Return: This would return 0 if the code is successful.
 */
int positive_or_negative(int n)
{
        if (n > 0)
                printf("%d is positive\n", n);
        if (n < 0)
                printf("%d is negative\n", n);
        if (n == 0)
                printf("%d is zero\n", n);
        return (0);
}
