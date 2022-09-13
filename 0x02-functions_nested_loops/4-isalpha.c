#include "main.h"
/**
 * _isalpha - function to check if c is a letter, low or upper
 * @c: is the int used for argument in function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
