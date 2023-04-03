#include "lists.h"
/**
 * free_listint - Frees a listint_t
 * @head: pointer to the head of the list
 * Author Tway
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
