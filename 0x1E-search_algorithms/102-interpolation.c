#include "search_algos.h"
/**
 * interpolation_search - search for value in sorted array
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: the value to searc for
 * Return: first index where value is located
 * -1 if not found or error
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (low <= high && value >= array[low] && value <= array[high])
	{
		size_t pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	if (value < array[low] || value > array[high])
		printf("Value checked array[%lu] is out of range\n", high);

	return (-1);
}
