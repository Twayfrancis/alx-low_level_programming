#include "main.h"
/**
 * print_diagsums - sum the two diagonals of a square matrix of integers
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
int diag1 = 0;
int diag2 = 0;
int row;
int i;
for (row = 0; row < size; row++)
{
i = (row * size) + row;
diag1 += a[i];
}
for (row = 1; row <= size; row++)
{
i = (row * size) - row;
diag2 += a[i];
}
printf("%d, %d\n", diag1, diag2);
}
