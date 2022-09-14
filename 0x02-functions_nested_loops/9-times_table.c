#include "main.h"
/**
 * times_table - function to print 9 times table, start wit 0
 * Return: 0
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 1; mult <= 9; mult++)
		{
		_putchar(',');
		_putchar(' ');
		prod = num * mult;
		if (prod <= 9)
			_putchar(' ');
		else
			_putchar((prod / 10) + '0');
		_putchar((prod % 10) + '0');
	}
	_putchar('\n');
}
}
