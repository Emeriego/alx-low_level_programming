#include "main.h"
/**
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: to be written to file
 * Return: returns 1 on success OR -1 on faliure
*/
int create_file(const char *filename, char *text_content)
{
	int fdesc;
	int txtLen;
	int stat;

	if (filename == NULL)
		return (0);
	fdesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fdesc == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (txtLen = 0; text_content[txtLen] != '\0'; txtLen++)
			;
		stat = write(fdesc, text_content, txtLen);
		if (stat == -1)
			return (-1);
	}
	close(fdesc);
	return (1);
}
