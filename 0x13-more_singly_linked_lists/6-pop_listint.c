#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: double pointer to the head node of the list
 * Author Tway
 * Return: the head node’s data (n).
 * if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *new_node;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (data);
}
