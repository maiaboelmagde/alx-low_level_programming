#include "main.h"

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)

{
	char *adm;
	unsigned int a;

	adm = malloc(sizeof(char) * size);
	if (size == 0 || adm == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		adm[a] = c;
	return (adm);
}
