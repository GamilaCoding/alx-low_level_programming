#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*pop_listint - deletes the head node of a linked list
*@head: head of the list
*Return: the deleted node data(n)
*/

int pop_listint(listint_t **head)
{
int data_n;
listint_t *pop_node;

if (head == NULL)
	return (0);
if (*head == NULL)
	return (0);
data_n = 0;
pop_node = *head;
data_n = (*head)->n;
*head = (*head)->next;
free(pop_node);
return (data_n);
}
