#include "3-calc.h"

/**
 * main - entry point.
 *
 * @argc: arrgments number.
 * @argv: argments.
 *
 * Return:
 * if the number of arguments is wrong, print Error,
 * followed by a new line, and exit with the status 98
 *
 * if the operator is none of the above, print Error,
 * followed by a new line, and exit with the status 99
 *
 * if the user tries to divide (/ or %) by 0, print Error,
 * followed by a new line, and exit with the status 100
 */

int main(int argc, char *argv[])
{
	int n1, n2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	n1 = atoi(argv[1]);
	op = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	if ((*op == '/' || *op == '%') && n2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(op)(n1, n2));

	return (0);
}
