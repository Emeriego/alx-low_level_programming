#include "main.h"
/**
 * append_text_to_file - appends txt to the end of file
 * @filename: the file.
 * @text_content: content to be added.
 * Return: returns 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int txtLen;
	int f_handle;
	int stat;

	if (filename == NULL)
		return (-1);
	f_handle = open(filename, O_APPEND | O_WRONLY);
	if (f_handle == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (txtLen = 0; text_content[txtLen] != '\0'; txtLen++)
			;

		stat = write(f_handle, text_content, txtLen);
		if (stat == -1)
		{
			return (-1);
		}
	}
	close(f_handle);
	return (1);
}
