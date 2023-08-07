#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - function that creates a file.
 *
 * @filename: points to the file
 * @text_content: points to the text content
 *
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fileopen;
	ssize_t writefile;

	if (filename == NULL)
		return (-1);

	fileopen = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fileopen == -1)
		return (-1);

	if (text_content != NULL)
	{
		writefile = write(fileopen, text_content, strlen(text_content));
		if (writefile == -1 || (size_t)writefile != strlen(text_content))
		{
			close(fileopen);
			return (-1);
		}
	}

	close(fileopen);
	return (1);
}

