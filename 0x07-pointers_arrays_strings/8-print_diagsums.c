#include "main.h"

/**
 * print_diagsums - a func prints the sum of the diagonals of a square matrix.
 * @a: the matrix
 * @size: matrix size.
 * Return: sum of matrix diagonals.
 */

void print_diagsums(int *a, int size)
{
	int i, j, n = 0;
	long int mainDiagonalsum = 0, otherDiagonalSum = 0;

	for (i = 0, j = size - 1; i < size && j >= 0; i++, j--, n++)
	{
		mainDiagonalsum += *(a + n * size + i);

		otherDiagonalSum += *(a + n * size + j);
	}

	printf("%ld, %ld\n", mainDiagonalsum, otherDiagonalSum);

}
