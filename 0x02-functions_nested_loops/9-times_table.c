#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 * Return: times table
 */
void times_table(void)
{
int rw, cl, d;

	for (rw = 0; rw <= 9; rw++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cl = 1; cl <= 9; cl++)
		{
			d = (rw * cl);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cl < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
