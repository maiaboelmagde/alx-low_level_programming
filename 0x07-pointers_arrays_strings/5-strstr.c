#include "main.h"

/**
 * _strstr -  a function that locates a substring.
 * @haystack: string
 * @needle: subString
 * Return: a pointer to the beginning of the located substring, ..
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, add = 0;
	char *result = NULL;

	while (haystack[i] != '\0')
	{
		j = 0;
		if (needle[j] == haystack[i])
		{
			add = 0;
			result = &haystack[i];
			while (needle[j] != '\0')
			{
				if (needle[j] != haystack[i + add])
				{
					result = NULL;
					break;
				}
				add++;
				j++;
			}
		}
		if (result != NULL)
		{
			return (result);
		}
		i++;
	}
	return (NULL);
}
