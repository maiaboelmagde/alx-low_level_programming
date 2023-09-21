#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - the functuion that is meant to concatinate the string
 * Return: char the pointer of the of the resulting string
 * @dest: the destination.
 * @src: the source
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;

	strcat(dest, src);
	ptr = dest;
	return (ptr);
}
