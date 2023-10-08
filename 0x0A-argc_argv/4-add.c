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
	int ans = 0, i, j;
	(void) argc;
	(void) argv;

	if (argc >= 2)
	{
		for (i = 1 ; i < argc ; i++)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (isalpha(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}

			ans += atoi(argv[i]);
		}
	}

	printf("%d\n", ans);

	return (0);
}
