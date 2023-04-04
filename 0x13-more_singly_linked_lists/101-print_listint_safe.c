#include "lists.h"
/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: pointer to the listint_t linked list.
 * Author Tway
 * Return: the number of nodes in the list
 * This function can print lists with a loop
 * You should go through the list only once
 * If the function fails, exit the program with status 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	long int results;

	while (head)
	{
		results = head - head->next;
		nodes++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (results > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (nodes);
}
