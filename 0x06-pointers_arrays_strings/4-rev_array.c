#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer to first element of array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int temp, t;
for (t = 0; t < n / 2; t++)
{
temp = a[t];
a[t] = a[n - t - 1];
a[n - t - 1] = temp;
}
}
