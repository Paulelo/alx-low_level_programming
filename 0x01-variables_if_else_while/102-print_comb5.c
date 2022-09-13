#include <stdio.h>
#include <unistd.h>

/**
 * main- print all possible combinations of two, two digit numbers
 * Return: 0
 */
int main(void)
{
	int l, m, n, o;

	for (l = 47 ; l <= 57 ; l++)
	{
		for (m = 47 ; m <= 57 ; m++)
		{
			for (n = 47 ; n <= 57 ; n++)
			{
				for (o = 47 ; o <= 57 ; o++)
				{
				if (((n + o) > (l + m) && n >= l) || l < n)
				{
					putchar(l);
					putchar(m);
					putchar(' ');
					putchar(n);
					putchar(o);

				if (l + m + n + o == 227 && l == 57)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
	

