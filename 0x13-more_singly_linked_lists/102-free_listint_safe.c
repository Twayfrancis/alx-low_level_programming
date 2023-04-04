#include "lists.h"
/**
 * free_listint_safe -  function that frees a listint_t list.
 * @h: a double pointer to the head of the linked list
 * Author Tway
 * Return: the size of the list that was free’d
 * The function sets the head to NULL
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current_node, *next;
	size_t count = 0;

	if (h == NULL)
		return (0);
	current_node = *h;
	while (current_node != NULL)
	{
		count++;
		next = current_node->next;
		free(current_node);

		if (next >= current_node)
			break;
		current_node = next;
	}
	*h = NULL;
	return (count);

}
