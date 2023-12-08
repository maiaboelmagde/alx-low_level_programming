#include "lists.h"

/**
 * add_dnodeint - Write a function that adds a new node
 * at the beginning of a dlistint_t list.
 *
 * @head: the current head node
 * @n : new_node data
 * Return: the new head node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *old = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}


	new_node->n = n;
	new_node->next = old;
	new_node->prev = NULL;

	if (old != NULL)
		old->prev = new_node;

	*head = new_node;

	return (*head);

}
