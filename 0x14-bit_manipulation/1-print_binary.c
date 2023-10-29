#include "main.h"

/**
 *print_binary - function that prints the binary representation of a number.
 *
 * @n: the number
 * Return: no return value
*/

void print_binary(unsigned long int n)
{
	unsigned long int two_Multiples;

	if (n == 0)
	{
		printf("%c", '0');
		return;
	}

	two_Multiples = 1;
	while (two_Multiples <= n)
		two_Multiples = (two_Multiples << 1);

	two_Multiples = (two_Multiples >> 1);

	while (two_Multiples >= 1)
	{
		if (two_Multiples <= n)
		{
			printf("%c", '1');
			n -= two_Multiples;
		} else
			printf("%c", '0');

		two_Multiples = (two_Multiples >> 1);

	}

}
