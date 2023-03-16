#include "main.h"
/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: size of memory to allocate
 * Return: ptr to allocated memory, fails termination 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
