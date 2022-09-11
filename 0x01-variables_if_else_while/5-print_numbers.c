#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints all single digit of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");

	return (0);
}
