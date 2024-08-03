#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: my string
 * @b: char I would put in the string.
 * @n: number of chars.
 * The _memset() function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b.
 *
 * Return:  pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
