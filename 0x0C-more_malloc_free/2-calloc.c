#include "main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elements to allocate
 * @size: the size of each element in bytes.
 * Return: returns a pointer to the allocated memory.
 * If nmemb or size is 0, then _calloc returns NULL
 * f malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
