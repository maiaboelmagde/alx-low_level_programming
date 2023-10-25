#include "lists.h"

/**
 * free_listint2 -  function that frees a listint_t list.
 *
 * @head: head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *list;
	listint_t *cur;

	if (head == NULL)
		return;

	list = *head;

	while (list != NULL)
	{
		cur = list;

		list = list->next;

		free(cur);
	}

	(*head) = NULL;

}
