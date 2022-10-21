#include "lists.h"

void __attribute__((constructor)) here(void);

/**
* here - prints a string before tge main function is encountered
*/
void here(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
