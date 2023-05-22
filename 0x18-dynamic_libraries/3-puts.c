#include "main.h"
/**
 * _puts -  function that prints string,followed by a new line,to stdout
 * @str: string
 * Return: string success
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
