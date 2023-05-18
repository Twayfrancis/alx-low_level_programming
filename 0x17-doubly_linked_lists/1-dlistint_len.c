#include "lists.h"
/**
 * dlistint_len - returns nummber of elements in a linked dlistint_t
 * @h: pointer to the head of the list
 * Author Tway
 * Return: the number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
