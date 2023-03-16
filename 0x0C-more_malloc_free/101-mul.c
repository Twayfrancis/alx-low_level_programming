#include "main.h"
#include <ctype.h>
/**
 * is_digit - checks if a character is a digit
 * @c: character
 * Return: 0 success
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * parse_num - functions parses a string into an integer.
 * @str: string
 * Return: digits
 */
int  parse_num(char *str)
{
	int num = 0;

	while (*str)
	{
		if (!is_digit(*str))
		{
			printf("Error\n");
			exit(98);
}
		num = num * 10 + (*str - '0');
		str++;
}
return (num);
}
/**
 * main - checks that there are two arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: prints error otherweise exit with status code 98
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = parse_num(argv[1]);
	num2 = parse_num(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
