#include "lists.h"
/**
 * add_nodeint_end - function adds a new node at the end of a listint_t list.
 * @head: a double pointer to the head of the listint_t list
 * @n: integer to be added to the new node
 * Author Tway
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current_node = *head;

	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
