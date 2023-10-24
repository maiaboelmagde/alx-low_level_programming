#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 * @head: refrance to head of list
 * @str: string to add;
 *
 * Return: new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);

	new->next = *head;
	*head = new;

	return (*head);
}
