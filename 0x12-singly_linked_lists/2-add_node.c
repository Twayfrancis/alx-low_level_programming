#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: A pointer to a pointer to the list_t list.
 * @str: the string to be added to the list_t list.
 * Author Tway
 * Return: The address of the new elements, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
