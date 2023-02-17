#include <stdio.h>
/**
 * main -what I call the alphabet game
 *
 * Return: Always 0.
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
putchar(letter);
letter++;
putchar('\n');
return (0);
}
