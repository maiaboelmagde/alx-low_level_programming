#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 *
 * @h: head of list
 *
 * Return: list len.
 */
size_t print_listint(const listint_t *h)
{
	int ret = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;

		ret++;
	}

	return (ret);
}
