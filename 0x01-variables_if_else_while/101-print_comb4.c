#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n, m, i;
for (n = 48; n < 58; m++)
{
for (m = 49; m < 58; m++)
{
for (i > m && m > n)
{
putchar(n);
putchar(m);
putchar(i);
if (n != 55 || m != 56)
{
putchar(',');
putchar('');
}
}
}
}
putchar('\n');
return (0);
}
