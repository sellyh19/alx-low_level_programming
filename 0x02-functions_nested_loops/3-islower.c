#include "main.h"
/**
 * _islower - function to check lower char
 * @c: is the int we wull use for the func arg
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
