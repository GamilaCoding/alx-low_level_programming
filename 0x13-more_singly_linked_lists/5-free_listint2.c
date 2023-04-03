#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * add_nodeint - a fun that adds a node a the beginning of a list
 * @head: a pointer to pointer to a head of linked list
 * @n: holds the data for the node
 * Return: the address of new element, or NULL if it failed
 */
void free_listint2(listint_t **head, const int n)
{
listint_t *new_node;
if (head == NULL)
return (NULL);
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->nextnext = *head;
*head = new_node;
return (*head);
}
