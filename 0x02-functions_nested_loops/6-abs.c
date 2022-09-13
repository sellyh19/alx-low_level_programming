#include "main.h"
#include <stdio.h>
/**
 *_abs - function to compute absolute value
 * @c: is the int used in the argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
