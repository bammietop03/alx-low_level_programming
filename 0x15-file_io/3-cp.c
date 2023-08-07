#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void helper(ssize_t *read, int *file_from, int *file_to,
		char *buffer, char *arg);
/**
 * main - copies the content of a file to another file.
 *
 * @argc: contains the number of argument passed
 * @argv: contains the argument passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	char *buffer;
	ssize_t readf, written;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}
	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	while ((readf = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		written = write(file_to, buffer, readf);
		if (written == -1 || written != readf)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			free(buffer);
			exit(99);
		}
	}
	helper(&readf, &file_from, &file_to, buffer, argv[1]);
	free(buffer);
	return (0);
}

void helper(ssize_t *readf, int *file_from, int *file_to,
		char *buffer, char *arg)
{

	if (*readf == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", arg);
		close(*file_from);
		close(*file_to);
		free(buffer);
		exit(98);
	}
	if (close(*file_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", *file_from);
		exit(100);
	}
	if (close(*file_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", *file_to);
		exit(100);
	}
}
