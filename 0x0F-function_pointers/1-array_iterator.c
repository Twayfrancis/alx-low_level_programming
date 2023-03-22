#include "function_pointers.h"
/**
 * array_iterator - funct executes func given as parameter on an array.
 * @array: array integers
 * @size: size of arra
 * @action: A function that takes an integer and returns void
 * Return: VOID
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
