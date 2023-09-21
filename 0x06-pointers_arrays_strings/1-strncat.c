#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - this is the function concatinates the string.
 * the differnce between strcat and this is that strncat
 * specifies the number of characters to be copied
 * Return: the pointer of the string incase of a succes
 * @destination:  the destination string
 * @src: the source string.
 * @n:  the number of characters to be copied.
 */
char *_strncat(char *destination, char *src, int n)
{
	strncat(destination, src, n);
	return (destination);
}
