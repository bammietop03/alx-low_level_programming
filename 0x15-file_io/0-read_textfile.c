#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and prints it
 *
 * @filename: points to the file name
 * @letters: contains the lenght of the file
 *
 * Return: writefile
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fileopen, readfile, writefile;
	char buffer[letters];

	if (!filename)
		return (0);

	fileopen = open(filename, O_RDONLY);
	if (fileopen == -1)
		return (0);

	readfile = read(fileopen, buffer, letters);
	if (readfile == -1)
	{
		close(fileopen);
		return (0);
	}

	writefile = write(STDOUT_FILENO, buffer, readfile);
	close(fileopen);

	if (writefile == -1 || writefile != readfile)
		return (0);

	return (writefile);
}
