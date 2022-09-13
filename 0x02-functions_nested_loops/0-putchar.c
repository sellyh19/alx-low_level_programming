#include <stdio.h>
/**
 * main- print _putchar
 * Return: 0
 */
int main(void)
{
char c[] = "_putchar";
int i = 0;

	while (i != '\0')
	{
	putchar(c[i]);
	i++;
	}
	putchar(10);
	return (0);
}
