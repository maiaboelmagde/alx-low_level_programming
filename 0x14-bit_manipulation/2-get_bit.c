#include "main.h"

/**
 * get_bit -  function that returns the value of a bit at a given index.
 *
 * @n: geven number.
 * @index: index needed from that number.
 *
 * Return: value of that indx.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if (n & (1lu << index))
		return (1);

	return (0);
}
