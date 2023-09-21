#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - finction that is copying the string.
 * Return: pointer of the desti for a success
 * @dest: the destination
 * @src: the source
 *@n: the no of chars to be coppied
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
