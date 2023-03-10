#include "main.h"

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
(void) argv, /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
