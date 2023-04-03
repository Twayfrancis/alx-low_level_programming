#include "lists.h"
/**
 * free_listint2 - functionthat frees a listint_t list
 * @head: double pointer to the head of the list
 * Author Tway
 * Return: head to null
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
	*head = (NULL);
}
