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
	size_t low;
	size_t high;
	size_t pos;

	if (array == NULL)
	{
		return (-1);
	}
	for (low = 0, high = size - 1; high >= 1;)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);

		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
