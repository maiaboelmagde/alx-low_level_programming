#include "lists.h"

/**
 * get_nodeint_at_index - function that
 * returns the nth node of a listint_t linked list.
 *
 * @head: head of list.
 * @index: index of node.
 *
 * Return: node in that index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	unsigned int len = 0;

	while (head != NULL)
	{
		if (len == index)
		{
			node = head;
			break;
		}
		len++;
		head = head->next;
	}

	return (node);
}
