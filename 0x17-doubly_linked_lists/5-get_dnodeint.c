#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns
 * the nth node of a dlistint_t linked list.
 *
 * @head: the double_linked_list head
 * @index: the nnode's index
 *
 * Return: required node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *our_node = head;

	while (our_node)
	{
		if (count == index)
		{
			break;
		}
		our_node = our_node->next;
		count++;
	}
	return (our_node);
}
