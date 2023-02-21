#include "main.h"
/**
 * jack_bauer - minute of the day of starting from 00:00 to 23:59
 * h = hour
 * m = minutes
 * for any loop breaks before passing 24:00
 * Author Tway
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
int h, m;
for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar(10);
}
}
}
