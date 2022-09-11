#include <stdio.h>

/**
 * main- prints the alphabts in lowercase
 * Return: 0
 */
int main(void)
{
	int y;
	char le;

	for (y = 0 ; y < 10 ; y++)
	{
		putchar(y + '0');
	}
	for (le = 'a' ; le <= 'f' ; le++)
	{
		putchar(le);
	}
		putchar('\n');

	return (0);
}
