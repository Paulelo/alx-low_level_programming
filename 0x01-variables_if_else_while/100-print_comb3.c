#include <stdio.h>

/**
 * main- prints all possible combinations of two digits
 * Return: 0
 */
int main(void)
{
	int u;
	int n;

	for (u = '0' ; u <= '9' ; u++)
	{
		for (n = '0' ; n <= '9' ; n++)
		{
			if (u < n)
			{
				putchar(u);
				putchar(n);

				if (u != '8' || (u == '8' && n != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

