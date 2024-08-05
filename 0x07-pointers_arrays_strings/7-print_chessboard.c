#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: 2dimentional array represent chessboard.
 * Retutn: noThing
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			printf("%c", a[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
