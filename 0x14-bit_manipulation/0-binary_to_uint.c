#include "main.h"

/**
 * calc_len - a function to calculate the lenth of the string
 * @s: the string
 * Return: the length
*/
int calc_len(const char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}

/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int.
 *
 * @b: the binary pattern
 * Return : decimal equavellant
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int counter, i, n;

	sum = 0;
	counter = 1;
	if (b == NULL)
		return (0);
	n = calc_len(b);
	for (i = n - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			sum += counter;
		else if (b[i] != '0')
			return (0);
		counter *= 2;
	}
	return (sum);
}