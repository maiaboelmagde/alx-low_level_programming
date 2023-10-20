#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 *
 * @head: refrance to head of list
 * @str: string to add;
 *
 * Return: new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);

	new->next = NULL;

	if (last == NULL)
	{
		*head = new;
		return (*head);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (*head);
}
