#include "main.h"
/**
 * jack_bauer - func to print every minute of the day Jack Bauer
 * from 00 to 23:59
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hour_rem;
	int mins_rem;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
		mins_rem = minutes % 10;
		hour_rem = hours % 10;
		_putchar(hours / 10 + '0');
		_putchar(':');
		_putchar(minutes / 10 + '0');
		_putchar(mins_rem + '0');
		minutes++;
		_putchar('\n');
		}
	hours++;
	minutes = 0;
	}
}
