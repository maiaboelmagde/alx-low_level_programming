#include "lists.h"

/**
 * list_len - function that
 * returns the number of elements in a linked list_t list.
 *
 * @head: head of list
 *
 * Return: list len.
 */
size_t list_len(const list_t *head)
{
	int len = 0;

	while (head != NULL)
	{
		head = head->next;
		len++;
	}

	return (len);
}
