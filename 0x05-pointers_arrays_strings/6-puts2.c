#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line.
 * @str: length
 * Return: input
 */
void puts2(char *str)
{
int length = 0;
int t = 0;
char *l = str;
int z;

while (*l != '\0')
{
l++;
length++;
}
t = length - 1;
for (z = 0; z <= t; z++)
{
if (z % 2 == 0)
{
_putchar(str[z]);
}
}
_putchar('\n');
}
