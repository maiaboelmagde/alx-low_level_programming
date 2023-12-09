#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at index
 * index of a dlistint_t linked list.
 *
 * @head: Double_linked_list head
 * @index: node's index we wanna delete
 *
 * Return: 1 if it succeeded, -1 if it failed.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *our_node = *head;

	if (our_node == NULL)
		return (-1);

	if (index == 0)
	{
		if (our_node->next == NULL)
		{
			*head = NULL;
		} else
		{
			our_node->next->prev = NULL;
			*head = our_node->next;
		}
		free(our_node);
		return (1);
	}

	while (our_node)
	{
		if (count == index)
		{
			if (our_node->prev != NULL)
				our_node->prev->next = our_node->next;

			if (our_node->next != NULL)
				our_node->next->prev = our_node->prev;
			free(our_node);
			return (1);
		}
		our_node = our_node->next;
		count++;
	}
	return (-1);
}
