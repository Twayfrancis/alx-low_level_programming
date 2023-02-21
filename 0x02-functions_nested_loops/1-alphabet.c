#include "main.h"

/**
 * print_alphabet - print alphabet in lower case
 * Author Tway
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
