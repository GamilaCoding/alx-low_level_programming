#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
/**
*pop_listint - deletes the head node of a linked list
*@head: head of the list
*
*Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
listint_t *popped;
int content;

if (*head == NULL)
return (0);
content = 0;
popped = *head;
content = (*popped)->n;

*head = (*head)->next;
free(popped);
return (content);
}
