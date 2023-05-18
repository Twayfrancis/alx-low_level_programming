#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data (n) of dlistint_t linked list
 * @head: pointer to the head node of the list
 * Author Tway
 * Return: sum of all data in the list
 * or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;
	/*iterate through the list and add all the data in the sum */
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
