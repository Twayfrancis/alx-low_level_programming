#include <stdio.h>
/**
 * main -prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = i; j < 10; j++)
{
putchar(i * 10 + j + '0');
putchar(j < 9 ? ',' : '\n');
}
}
return (0);
}
