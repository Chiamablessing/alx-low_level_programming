#include <stdio.h>

void my_print_main(void) __attribute__((constructor));

/**
 * my_print_main - function that print the main function
 */
void my_print_main(void)
{
	printf(
			"You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
