#include <stdio.h>
/**
 * main - prints all alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)

	{
		putchar(letters);
	}
	putchar('\n');

	return (0);
}
