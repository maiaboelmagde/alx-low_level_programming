#include "lists.h"

/**
 * insert_nodeint_at_index - function that
 * inserts a new node at a given position.
 *
 * @head: head of list.
 * @idx: index to insert in.
 * @n: num to insert.
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *list, *prev;
	unsigned int len = 0;

	if (newNode == NULL || head == NULL)
		return (NULL);

	list = *head;

	while (list != NULL)
	{
		if (len == idx)
			break;
		len++;
		prev = list;
		list = list->next;
	}

	if (len == idx)
	{
		newNode->n = n;
		if (idx != 0)
		{
			prev->next = newNode;
			newNode->next = list;
		}
		else
		{
			newNode->next = (*head)->next;
			(*head) = newNode;
		}
	}
	else
	{
		free(newNode);
		newNode = NULL;
	}

	return (newNode);
}
