#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string
 * Return: if character odd print n = (length_of_the_string - 1) / 2
 */
void puts_half(char *str)
{
int t;
for (t = 0; str[t] != '\0'; t++)
;
t++;
for (t /= 2; str[t] != '\0'; t++)
{
_putchar(str[t]);
}
_putchar('\n');
}
