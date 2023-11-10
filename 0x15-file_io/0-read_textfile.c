#include "main.h"
/**
 * read_textfile - reads a file.
 * @filename: pointer to filename.
 * @letters: character count.
 * Return: returns number of characters read.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fdesc;
	ssize_t bitesEaten, bitesCount;

	if (filename == NULL)
	{
		return (0);
	}
	fdesc = open(filename, O_RDONLY);
	if (fdesc == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fdesc);
		return (0);
	}
	bitesEaten = read(fdesc, buf, letters);
	if (bitesEaten == -1 || bitesEaten == 0)
	{
		close(fdesc);
		free(buf);
		return (0);
	}
	bitesCount = write(STDOUT_FILENO, buf, bitesEaten);
	if (bitesCount == -1 || bitesEaten != bitesCount)
	{
		close(fdesc);
		free(buf);
		return (0);
	}
	free(buf);
	close(fdesc);
	return (bitesCount);
}
