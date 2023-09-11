#include <stdio.h>
/**
 * main -  printing all possible combinations of single-digit numbers
 * Return: 0
*/

int main(void)
{
	int d = 0;

	while (d <= 9)
	{
		putchar(d + 48);

		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');
	return (0);
}
