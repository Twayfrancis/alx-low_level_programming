#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: n is the number of times the character \ should be printed
 * Author Tway
 * If n is 0 or less, the function should only print a \n
 * Return: diagonal should end with a \n
 */
void print_diagonal(int n)
{
int dw, tw;

if (n <= 0)
{
	_putchar('\n');
}
else
{
	for (dw = 1; dw <= n; dw++)
	{
		for (tw = 1; tw < dw; tw++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
}
