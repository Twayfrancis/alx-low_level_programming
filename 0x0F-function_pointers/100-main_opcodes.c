#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of itself
 * @argc: num of arguments supplied to the program
 * @argv: an array of pointers to the arguments
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *ptr = (unsigned char *)main;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(ptr + i));
	}
	printf("\n");
	return (0);
}
