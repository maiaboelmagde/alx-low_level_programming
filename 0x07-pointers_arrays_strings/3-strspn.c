#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: String.
 * @accept: substring
 * Return: the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, i = 0, j = 0;
	int can = 0;

	while (s[i] != '\0')
	{
		j = 0;
		can = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				can = 1;
				len++;
				break;
			}
			j++;
		}

		if (!can)
		{
			break;
		}

		i++;
	}

	return (len);
}
