#include <stdio.h>

/**
 * main - printing all single digit numbers of base 10 using putchar
 * Return: 0
*/

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + '0');
		d++;
	}
	putchar('\n');
	return (0);
}
