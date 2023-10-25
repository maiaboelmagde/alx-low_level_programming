#include "lists.h"

/**
 * add_nodeint_end - function that
 * adds a new node at the end of a listint_t list.
 *
 * @head: refrance to head of list
 * @n: new number to add.
 *
 * Return: new list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *list = (*head);

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (list == NULL)
	{
		(*head) = newNode;

		return (*head);
	}

	while (list->next != NULL)
	{
		list = list->next;
	}

	list->next = newNode;

	return (*head);
}
