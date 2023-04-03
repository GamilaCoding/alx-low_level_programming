#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - a function of all elements print list
 * @h: holds the head to linked list
 * Return: The number of the nodes
 **/
size_t print_listint(const listint_t *h)
{
size_t node_C;
const listint_t *next_ptr;

next_ptr = h;
node_C = 0;

while (next_ptr != NULL)
{
printf("%i\n", next_ptr->n);
node_C += 1;
next_ptr = next_ptr->next;
}
return (node_C);
}
