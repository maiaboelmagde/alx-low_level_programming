#include "lists.h"

/**
 * pop_listint - function that
 * deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 *
 * @head: refrance to head of list
 *
 * Return: erased number
 */
int pop_listint(listint_t **head)
{
	listint_t *prev;
	int num = 0;

	if (head == NULL || (*head) == NULL)
		return (0);

	prev = (*head);
	num = prev->n;

	(*head) = (*head)->next;

	free(prev);

	return (num);
}
