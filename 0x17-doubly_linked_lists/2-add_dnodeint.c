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
	/* initialize the new node */
	new_node->n = n;
	new_node->prev = NULL;

	/* if the list is empty, make the new node the head*/
	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		/* set new node's next pointer to the old head*/
	new_node->next = *head;
	/* set the old head's prev pointer to the new node*/
	(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
