#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position.
 *
 * @h: The double_linked_list head node
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: the node data
 *
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *cur_node = *h;
	unsigned int count = 0;

	if ((cur_node == NULL && !(idx == 0)))
		return (NULL);
	if (idx == 0)
	{
		new_node = add_dnodeint(&cur_node, n);
	} else
	{
		while (cur_node)
		{
			if (count == idx)
			{
				new_node = malloc(sizeof(dlistint_t));
				if (new_node == NULL)
					return (NULL);
				new_node->n = n;
				new_node->prev = cur_node->prev;
				cur_node->prev = new_node;
				new_node->next = cur_node;
				cur_node = new_node->prev;
				cur_node->next = new_node;
			}
			count++;
			cur_node = cur_node->next;
		}
	}
	if (idx == count)
	{
		cur_node = *h;
		new_node = add_dnodeint_end(&cur_node, n);
	}
	if (idx > count)
		return (NULL);

	return (new_node);
}
