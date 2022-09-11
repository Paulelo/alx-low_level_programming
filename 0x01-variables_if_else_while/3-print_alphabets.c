#include <stdio.h>

/**
 * main- prints the alphabts in lowercase
 * Return: 0
 */
int main(void)
{
	char le;
	char LE;

	for (le = 'a' ; le <= 'z' ; le++)
	{
		putchar(le);
	}
	for (LE = 'A' ; LE <= 'Z' ; LE++)
	{
		putchar(LE);
	}
		putchar('\n');

	return (0);
}
