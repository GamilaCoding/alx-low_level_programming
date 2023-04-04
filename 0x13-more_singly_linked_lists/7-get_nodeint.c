#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_index - return the nth node of linked list
 * @head: pointer to the head of the list
 * @index: index of the node required
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *next_ptr;
unsigned int i;

next_ptr = head;
for (i = 0; i < index; i += 1)
{
if (next_ptr == NULL)
	return (NULL);
next_ptr = next_ptr->next;
}
return (next_ptr);
}
