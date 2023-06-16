#include <stdio.h>
/**
 * main - prints all alphabets lower case and upper case
 *
 * Return: Always 0
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)

	{
		if (lower == 'q' || lower == 'e')

		{
			continue;
		}
		putchar(lower);
	}
	putchar('\n');

	return (0);
}
