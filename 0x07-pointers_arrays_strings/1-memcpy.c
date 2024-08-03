#include "main.h"

/**
 * char *_memcpy - function that copies memory area.
 * function copies n bytes from memory area src to memory area dest.
 * @dest: destinated string
 * @src: string we copy from.
 * @n: nubber of chars that would copied.
 *
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
