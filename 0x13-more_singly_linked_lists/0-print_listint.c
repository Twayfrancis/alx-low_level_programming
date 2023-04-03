#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: a pointer to the listint_t list
 * Author Tway
 * Return: the number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
