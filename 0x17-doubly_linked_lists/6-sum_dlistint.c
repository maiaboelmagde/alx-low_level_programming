#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of
 * all the data (n) of a dlistint_t linked list.
 *
 * @head: Double_linked_list head
 *
 * Return: the sum of node's data
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cur_node = head;
	int sum = 0;

	while (cur_node)
	{
		sum += cur_node->n;
		cur_node = cur_node->next;
	}
	return (sum);
}
