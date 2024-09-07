#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted array
 * using the Binary search algorithm
 *
 * @array: is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located or -1.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, heigh = size - 1, mid, printing_counter;

	if (!array)
	{
		return (-1);
	}

	while (low <= heigh)
	{
		printf("Searching in array: ");
		for (printing_counter = low; printing_counter < heigh; printing_counter++)
		{
			printf("%d, ", array[printing_counter]);
		}
		printf("%d\n", array[heigh]);

		mid = (low + heigh) / 2;
		if (value < array[mid])
		{
			heigh = mid - 1;
		} else if (value > array[mid])
		{
			low = mid + 1;
		} else if (value == array[mid])
		{
			return (mid);
		}
	}
	return (-1);
}
