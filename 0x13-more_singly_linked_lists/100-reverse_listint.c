#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*reverse_listint - a func that reverses a list
*@head: a pointer to pointer that point to head of list
*Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous_ptr;
listint_t *rev_ptr;

if (*head == NULL || (*head)->next == NULL)
return (*head);
previous_ptr = *head;
rev_ptr = (*head)->next;

while (rev_ptr != NULL)
{
(*head)->next = rev_ptr->next;
rev_ptr->next = previous_ptr;
previous_ptr = rev_ptr;
rev_ptr = (*head)->next;
}
*head = previous_ptr;
return (*head);
}
