#include <unistd.h>
/**
 * main - Entry point.
 *
 * Description: The code prints to the eror output.
 * Return: Would always return 1 if successful.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
