#include "lists.h"

/**
*listint_len - a function that prints the length of a listint_t list.
*
*@h : lisr_t list
*
*Return: list len.
*
*/
size_t listint_len(const listint_t *h)
{
        int ret = 0;

        while (h != NULL)
        {
                h = h->next;
                ret++;
        }
        return (ret);
}
