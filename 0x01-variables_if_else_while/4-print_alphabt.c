#include <stdio.h>
/**
 * main - When I was having that alphabet soup
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
if (letter != 'q' && letter != 'e')
putchar(letter);
putchar('\n');
return (0);
}
