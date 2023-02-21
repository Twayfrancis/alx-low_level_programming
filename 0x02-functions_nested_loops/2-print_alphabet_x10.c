#include "main.h"
/**
 *  print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 *  author Tway
 *  Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int n, dw;

	dw = 0;

	while (dw < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		dw++;
		_putchar('\n');
	}
}
