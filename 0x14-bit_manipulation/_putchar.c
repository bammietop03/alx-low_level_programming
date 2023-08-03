#include <unistd.h>

/**
 * _putchar - A custom function to print out chracters.
 *
 * Description: It writes single chracters to standard output STDOUT_FILENO.
 * @c: The charcter to be printed
 *
 * Return: The number of bytes written or -1 on error.
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
