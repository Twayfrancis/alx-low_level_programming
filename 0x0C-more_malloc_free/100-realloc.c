#include "main.h"
/*
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: pointer to the newly allocated space
 * NULL if malloc fails or new_size is 0 and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
		return (NULL);

	if (new_size > old_size)
		memcpy(new_ptr, ptr, old_size);

	else
		memcpy(new_ptr, ptr, new_size);

	free(ptr);
	return (new_ptr);
}
