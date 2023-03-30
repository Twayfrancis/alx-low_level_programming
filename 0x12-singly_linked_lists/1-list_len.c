#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: a pointer to the list_t list
 * Author TWay
 * Return: the number of nodes in the list_t list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
