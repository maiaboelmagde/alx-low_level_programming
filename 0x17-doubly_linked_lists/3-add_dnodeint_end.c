#include "lists.h"

/**
 * add_dnodeint_end - Write a function that adds a new node
 * at the end of a dlistint_t list.
 *
 * @head: double-linked_list head node
 * @n: the new node data
 *Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (last_node == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;
	new_node->prev = last_node;

	return (new_node);
}
