#include <stdio.h>
/**
 * main - printing all possible combinations of single-digit numbers
 * Return: 0
*/

int main(void)
{
	int d1 = 0, d2 = 0;

	while (d1 <= 9)
	{
		d2 = 0;
		while (d2 <= 9)
		{
			if (d1 != d2 && d1 < d2)
			{
				putchar(d1 + 48);
				putchar(d2 + 48);

				if (d1 + d2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d2++;
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
