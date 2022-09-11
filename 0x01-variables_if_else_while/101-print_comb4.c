#include <stdio.h>
/**
 * main - combine 2 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';
	int b = a + 1;
	int c = b + 1;

	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != '7')
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
			c = b + 1;
		}
	a++;
	b = a + 1;
	c = b + 1;
	}
	putchar('\n');
	return (0);
}
