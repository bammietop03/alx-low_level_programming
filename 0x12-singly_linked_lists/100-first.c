#include <stdio.h>

/**
 * prints_before_main - The program prints before the main function
 * is executed.
 */
void prints_before_main(void) __attribute__((constructor));

void prints_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
