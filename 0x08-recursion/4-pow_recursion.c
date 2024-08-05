#include "main.h"
/**
 * _pow_recursion - a function returns the value of x raised to the power of y.
 * @x: base value.
 * @y: power.
 * Return: the value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y == 1)
	{
		return (x);
	} else if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	} else if (y % 2)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));

}
