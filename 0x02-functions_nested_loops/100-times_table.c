#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: input
 * Author Tway
 * Return: Always 0 (success)
 */
void print_times_table(int n)
{
int i, j;
if (n < 0 || n > 15)
return;
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= n; j++)
{
printf("%d\t", i * j);
}
printf("\n");
}
}
