#include "lists.h"
/**
 * dlistint_len - get the length of nodes in a double linked list
 * @h: header of double linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->prev;
	}
		return (i);
	}
