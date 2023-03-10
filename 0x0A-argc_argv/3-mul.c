#include "main.h"
/**
 * main - Entry point. Multiplies two numbers and prints the result.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 if successful, otherwise 1.
 */
int main(int argc, char *argv[])
{
	int num1 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", num1);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
