#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 *
 * @n: geven number.
 * @index: index needed to make it 1;
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1lu << index);

	return (1);
}
