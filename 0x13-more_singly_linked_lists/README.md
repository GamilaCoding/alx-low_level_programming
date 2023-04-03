# 0x13.c - More Singly linked lists
# General information 
 - allowed editors: vi, emacs
 - all your files will compiled on Ubuntu 20.04 LTS by gcc, and using the options -wall -wextra -pedantic -std=gun89 -werror
 - all your files should end with a new line.
 - a README.md file, at the root of folder of the project is mandatory
 - the only C standard library function allowed ar malloc, free and exit
 - any use of function like printf, puts , calloc, realloc etc.. is forbidden
 - You don’t have to push _putchar
# More Info 
use this data structure for this project :
 ## /**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint-t; ##

# Tasks
## 0-print list
Write a function that prints all the elements of a listint-t list.

Prototype: size-t print-listint(const listint-t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf 
## 1-list length
Write a function that returns the number of elements in a linked listint_t list.

Prototype: size_t listint_len(const listint_t *h);
## 2-add node 
Write a function that adds a new node at the beginning of a listint-t list.

Prototype: listint-t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
## 3-add node at the end
Write a function that adds a new node at the end of a listint_t list.

Prototype: listint_t *add-nodeint-end(listint-t **head, const int n);
Return: the address of the new element, or NULL if it failed
## 4-free list 
Write a function that frees a listint_t list.

Prototype: void free_listint(listint_t *head);
## free
Write a function that frees a listint_t list.

Prototype: void free_listint2(listint_t **head);
The function sets the head to NULL
## 6-pop
Write a function that deletes the head node of a listint-t linked list, and returns the head node’s data (n).

Prototype: int pop-listint(listint-t **head);
if the linked list is empty return 0
## 7-get node at index
Write a function that returns the nth node of a listint_t linked list.

Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, return NULL
## 8-sum list
Write a function that returns the sum of all the data (n) of a listint_t linked list.

Prototype: int sum_listint(listint_t *head);
if the list is empty, return 0
## 9-insert node int
Write a function that inserts a new node at a given position.

Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0
Returns: the address of the new node, or NULL if it failed
if it is not possible to add the new node at index idx, do not add the new node and return NULL
# 10-delete index
Write a function that deletes the node at index index of a listint-t linked list.

Prototype: int delete-nodeint-at-index(listint-t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0
Returns: 1 if it succeeded, -1 if it failed
