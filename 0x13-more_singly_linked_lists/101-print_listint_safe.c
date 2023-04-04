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
	long int result;

	while (head)
	{
		result = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		count++;

		if (result > 0)
		head = head->next;

		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}
	}
	return (count);
}
