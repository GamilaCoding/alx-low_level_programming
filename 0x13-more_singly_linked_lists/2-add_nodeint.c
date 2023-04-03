#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_nodeint - a func that adds a node at the begin og line
 * @head: a pointer to pointer to head of linked list
 * @n: holds the data for the node
 * Return: the address of new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;

if (head == NULL)
return (NULL);
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;

return (*head);
}
