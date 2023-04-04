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
	const listint_t *current_node = head;
	size_t count = 0;

	while (current_node != NULL)
	{
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		count++;

		if (current_node > current_node->next)
		{
			current_node = current_node->next;
		}
		else
		{
			printf("-> [%p} %d\n", (void *)current_node->next, current_node->next->n);
			exit(98);
		}
	}
	return (count);
}
