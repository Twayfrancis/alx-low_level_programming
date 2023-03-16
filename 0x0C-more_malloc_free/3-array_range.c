#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: the minimum value of array
 * @max: the maximum value of array
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (!arr)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		arr[i] = min + i;
	return (arr);
}
