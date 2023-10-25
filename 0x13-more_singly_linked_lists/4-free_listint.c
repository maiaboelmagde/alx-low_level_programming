#include "lists.h"

/**
 * free_listint -  function that frees a listint_t list.
 *
 * @head: head of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *cur;

	while (head != NULL)
	{
		cur = head;

		head = head->next;

		free(cur);
	}

}
