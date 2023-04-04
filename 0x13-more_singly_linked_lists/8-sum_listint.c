#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sum up  all the date in linked list
 * @head: head of the list
 *
 * Return: sum of thenumber
 */

int sum_listint(listint_t *head)
{
listint_t *next_ptr;
int sum;
if (!head)
return (0);
next_ptr = head;
sum = 0;
while (next_ptr != NULL)
sum += next_ptr->n;
next_ptr = next_ptr->next;
}
return (sum);
}
