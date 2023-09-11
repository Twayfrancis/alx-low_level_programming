#include "search_algos.h"
/**
 * linear_search - searches value in array using linear sch algorithm
 * @array: pointer to first element
 * @size: number of elements in array
 * @value: value to searc for
 * Return: fist index where 'value' is located
 * -1 if not found or 'array' is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
