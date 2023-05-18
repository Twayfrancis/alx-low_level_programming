#include "lists.h"
/**
 * add_dnodeint - adds a new node at beginning of a dlistint_t list.
 * @head: pointer to head  node of the list
 * @n: data to store in new node
 * Author Tway
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
