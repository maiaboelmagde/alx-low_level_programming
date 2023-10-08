#include "main.h"

/**
 * main - begining point
 *
 * @argc: arguments count
 * @argv: arguments values
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	(void) argc;
	(void) argv;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
