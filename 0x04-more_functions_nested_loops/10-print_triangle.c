#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Return: # to print the triangle
 */
void print_triangle(int size)
{
int tw, ej, ci;
if (size <= 0)
{
	_putchar('\n');
}
else
{
	for (ej = 0; ej <= (size - 1); ej++)
	{
		for (tw = 0; tw < (size - 1) - ej; tw++)
		{
			_putchar(' ');
		}
		for (ci = 0; ci <= ej; ci++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
}
