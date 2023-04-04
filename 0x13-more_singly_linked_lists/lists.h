#define LISTS_H
#ifndef LISTS_H
/*
 * struct_listint_s - signly linked list
 * @n: integar
 * @next: point to the next node
 *
 * Descriptions: signly linked list node structure
 * for ALX project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
list_t *reverse_listint(listint **head);
size_t print_listint_safe(const listint_t *head);
size_t free_listint_loop(listint_t **h);
listint_t *find_listint_loop(listint_t *head);
#endif
