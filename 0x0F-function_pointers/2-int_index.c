#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: my array.
 * @size: array size;
 * @cmp: function to check every element.
 *
 * Return: index of first match element in the array.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
