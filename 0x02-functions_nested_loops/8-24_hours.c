#include "main.h"

/**
 * jack_bauer- prints time
 * Return: 0
 */
void jack_bauer(void)
{
	int hrs = 0;
	int min = 0;
	int hrs_remain;
	int min_remain;

	while (hrs <= 23)
	{
	while (min <= 59)
	{
	min_remain = min % 10;
	hrs_remain = hrs % 10;
	_putchar(hrs / 10 + '0');
	_putchar(hrs_remain + '0');
	_putchar(':');
	_putchar(min / 10 + '0');
	_putchar(min_remain + '0');
	min++;
	_putchar('\n');
	}
	hrs++;
	min = 0;
}
}
