#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * free_listint2 - a fun a linked list
 * @head: a pointer to head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *free_ptr;
listint_t *ptr;
if (head != NULL)
{
ptr = *head;
while ((free_ptr = ptr) != NULL)
{
ptr = ptr->next;
free(free_ptr);
}
*head = NULL;
}
}
