#include "main1.h"
/**
 * main- print _putchar
 * Return: 0
 */
int main(void)
{
char c[] = "_putchar";
int i = 0;

	while (c[i] != '\0')
	{
	_putchar(c[i]);
	i++;
	}
	_putchar(10);
	return (0);
}
