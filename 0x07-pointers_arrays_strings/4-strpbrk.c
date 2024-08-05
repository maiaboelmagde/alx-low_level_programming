#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string s of any of the bytes in the string accept.
 * @s: the string.
 * @accept: substring we search for.
 * Return: a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
    
    int j = 0;

    while (*s != '\0')
    {
        j = 0;
        while (accept[j] != '\0')
        {
            if (accept[j] == *s)
            {
                return (s);
            }
            j++;
        }
        s++;
    }
    return (NULL);
}