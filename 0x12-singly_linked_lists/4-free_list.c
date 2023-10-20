#include "lists.h"

/**
 * free_list -  function that frees a list_t list.
 *
 * @head: head of list
 *
 * Return: list len.
 */
void free_list(list_t *head)
{
	list_t *prev;

	while (head != NULL)
	{
		prev = head;
		head = head->next;

		free(prev->str);
		free(prev);

	}

}
