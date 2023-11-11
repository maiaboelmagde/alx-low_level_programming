#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 *
 * @n: given number.
 * @index: index needed to make it 0;
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1lu << index);
	*n ^= (1lu << index);

	return (1);
}
