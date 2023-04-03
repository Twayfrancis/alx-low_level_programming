#include "lists.h"
/**
 * sum_listint - function returns sum of all data (n) of a listint_t  list
 * @head: pointer to listint_t list
 * Author Tway
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
