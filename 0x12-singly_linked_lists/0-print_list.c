#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @head: head of list
 *
 * Description:
 * function that prints all the elements of a list_t list.
 * and return len.
 * If str is NULL, print [0] (nil).
 *
 * Return: list len.
 */
size_t print_list(const list_t *head)
{
	int len = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);

		head = head->next;
		len++;
	}

	return (len);
}
