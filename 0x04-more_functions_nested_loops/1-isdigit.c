#include "main.h"

/**
 * _isdigit - define if a character is a number
 * Return: 1 a number or  0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
