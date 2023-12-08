#include "lists.h"

/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 * @head: list head
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *del = head;
	while (head)
	{
		head = head->next;
		free(del);
		del = head;
	}
}
