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
	size_t count = 0;
	const listint_t *new_node, *previous_node;

	while (head != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);

		new_node = head->next;
		previous_node = head;

		while (new_node != NULL && new_node != head)
		{
			count++;
			printf("[%p] %d\n", (void *)new_node, new_node->n);

			if (new_node->next == NULL || new_node->next <= new_node || new_node->next == previous_node)
			{
				exit(98);
			}

			previous_node = new_node;
			new_node = new_node->next;
		}
		head = new_node;
	}
	
	return (count);
}
