#include <stdio.h>
/**
 * main - combine 2 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = '0';
	int b = a + 1;

	while (a <= '8')
	{
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if (a != '8')
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
