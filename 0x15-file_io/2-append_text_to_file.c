#include "main.h"
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: points to the file name
 * @text_content: contains the file to be appended
 *
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileopen, writefile;

	if (!filename)
		return (-1);

	fileopen = open(filename, O_WRONLY | O_APPEND);

	if (fileopen == -1)
		return (-1);

	if (text_content)
	{
		writefile = write(fileopen, text_content, strlen(text_content));

		if (writefile == -1)
		{
			close(fileopen);
			return (-1);
		}
	}
	close(fileopen);
	return (1);
}
