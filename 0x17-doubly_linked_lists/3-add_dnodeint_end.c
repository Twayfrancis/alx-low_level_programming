#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at end of a dlistint_t list
 * @head: pointer to the head node of the list
 * @n: the data to store in the new node
 * Author Tway
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *current = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	/* initialize the new node */
	new_node->n = n;
	new_node->next = NULL;
	/* if the list is empty, make the new node the head*/
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		/*iterate through the list until you reach the end*/
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		/*set new node's prev pointer to the last node in the list*/
		new_node->prev = current;
		/*set the last node's next pointer to the new node*/
	}
	return (new_node);
}
