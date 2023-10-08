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
	(void) argc;
	(void) argv;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
