#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: pointer to linked list
 * Author Tway
 * Return: address of  node where loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start = head;
	listint_t *finish = head;

	if (!head)
		return (NULL);

	while (start && finish && finish->next)
	{
		finish = finish->next->next;
		start = start->next;
		if (finish == start)
		{
			start = head;
			while (start != finish)
			{
				start = start->next;
				finish = finish->next;
			}
			return (finish);
		}
	}
	return (NULL);
}
