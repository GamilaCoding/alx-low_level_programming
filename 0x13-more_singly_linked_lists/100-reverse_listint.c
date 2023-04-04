#include <string.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
*reverse_listint - a funcation that reverses a list
*@head: a pointer to pointer that to head of list 
*Return: A pointer to the first node of the resersed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous_ptr;
listint_t  *rev_ptr;
if (*head == NULL || (*head)->next == NULL)
return (*head);
previous_ptr = *head;
while (rev_ptr  != NULL)
{
(*head)->next = rev_ptr->next;
rev_ptr->next = previous_ptr;
previous_ptr = rev_ptr;
rev_ptr = (*head)->next;
}
*head = previous_ptr;

return (*head);
}
