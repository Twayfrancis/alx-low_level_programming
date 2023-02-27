#include "main.h"
/**
 * print_rev - function that prints string,in reverse,followed by new line
 * @s: string
 * Return: Always 0 success
 */
void print_rev(char *s)
{
int length = 0;
int t;
while (*s != '\0')
{
length++;
s++;
}
s--;
for (t = length; t > 0; t--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
