#include "main.h"

int prnt_err(int err, char *f, int fhandle);

/**
 * main - Entry point.
 * @argc: Arg count.
 * @argv: arguments.
 * Return: returns 0 for success.
*/
int main(int argc, char *argv[])
{
	int stat_r, stat_w;
	char buffer[1024];
	int f_in, f_out;
	int f_in_close, f_out_close;

	if (argc != 3)
		prnt_err(97, NULL, 0);
	f_in = open(argv[1], O_RDONLY);
	if (f_in == -1)
		prnt_err(98, argv[1], 0);

	f_out = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (f_out == -1)
		prnt_err(99, argv[2], 0);

	stat_r = read(f_in, buffer, 1024);
	while (stat_r != 0)
	{
		if (stat_r == -1)
			prnt_err(98, argv[1], 0);

		stat_w = write(f_out, buffer, stat_r);
		if (stat_w == -1)
			prnt_err(99, argv[2], 0);
		stat_r = read(f_in, buffer, 1024);
	}

	f_in_close = close(f_in);
	if (f_in_close == -1)
		prnt_err(100, NULL, f_in);

	f_out_close = close(f_out);
	if (f_out_close == -1)
		prnt_err(100, NULL, f_out);
	return (0);
}
/**
 * prnt_err - prints error messages accordingly.
 * @err: exit number.
 * @f: the file - in or out.
 * @fhandle: file handle.
 * Return: returns 0 on success
*/
int prnt_err(int err, char *f, int fhandle)
{
	if (err == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(err);
	}
	else if (err == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f);
		exit(err);
	}
	else if (err == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(err);
	}
	else if (err == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fhandle);
		exit(err);
	}
	else
	{
		return (0);
	}
}
