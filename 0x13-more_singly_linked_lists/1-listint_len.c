#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: a pointer to the listint_t list
 * Author Tway
 * Return: returns the number of elements in a listint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
