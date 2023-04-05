#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*insert_nodeint_at_index - a function that insert 
*a new node at given position
*@head: a pionter to pointer to struct 
*@idx: the of index the new list where the new node
*should be added index starts 0
*@n:the data for new node
*Return: the address for new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *next_ptr;
listint_t *new_node;
listint_t *previous_ptr;
unsigned int i;
if (head == NULL)
return (NULL);
next_ptr = *head;
previous_ptr = NULL;
for (i = 0 ; i < idx; i += 1)
{
if (next_ptr == NULL)
return (NULL);
previous_ptr = next_ptr;
next_ptr = next_ptr->next;
}
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
if (idx == 0)
*head = new_node;
else
previous_ptr->next = new_node;
return (new_node);
}
