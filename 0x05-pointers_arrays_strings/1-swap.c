#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: first integer to swap
 * @b: second integer to swap
 * Retur: 0 success
 */
void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}
