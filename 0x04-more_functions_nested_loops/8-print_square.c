#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line
 * @size: is the size of the square
 * Author TWay
 * If size is 0 or less, the function should print only a new line
 * Return: # printed square
 */
void print_square(int size)
{
int dw, tw;
if (size <= 0)
{
	_putchar('\n');
}
else
{
	for (dw = 1; dw <= size; dw++)
	{
		_putchar('#');
		for (tw = 2; tw <= size; tw++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
}
