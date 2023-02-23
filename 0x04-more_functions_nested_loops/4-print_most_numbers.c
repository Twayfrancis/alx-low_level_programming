#include "main.h"
/**
 * print_most_numbers - prints the numbers 0 to 9, followed by a new line.
 * Author Tway
 * Return: 0-9, doesn't print 2 & 4, prints new line.
 */
void print_most_numbers(void)
{
	int d;

	for (d = 0; d <= 9; d++)
	{
		if ((d == 2) || (d == 4))
			continue;
		else
			_putchar(d + '0');
	}
	_putchar('\n');
}
