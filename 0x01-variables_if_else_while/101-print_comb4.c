#include <stdio.h>

/**
 * main- prints all possible combination of three digit numbers
 * Return: 0
 */
int main(void)
{
	int p, l, d;

	for (p = '0' ; p <= '9' ; p++)
	{
		for (l = '0' ; l <= '9' ; l++)
		{
			for (d = '0' ; d <= '9' ; d++)
			{
				if (p < l && l < d)
				{
					putchar(p);
					putchar(l);
					putchar(d);
					if ((p != '7' || (p == '7' && l != '8')) || (l == '8' && d != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
