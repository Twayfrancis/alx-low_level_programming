#include "main.h"
/**
 * main - Entry point. Adds positive numbers and prints the result.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 if successful, otherwise 1.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j]; j++)
	{
		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
