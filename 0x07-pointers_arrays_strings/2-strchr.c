#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string.
 * @c: char.
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	char *p = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			p = s;
			break;
		}

		s++;
	}
	return (p);
}
