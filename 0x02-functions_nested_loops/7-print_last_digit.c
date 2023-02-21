#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @nld: last digit value
 * Return: last digit value
 */
int print_last_digit(int nld)
{
int pld;
pld = (nld % 10);
if (pld < 0)
{
pld = (-1 * pld);
}
_putchar(pld + '0');
return (pld);
}
