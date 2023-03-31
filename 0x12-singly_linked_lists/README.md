# Introduction to Linked list Data Structure
 there are 2 ways to maintain a list in memory
  - arrays  - linked list
the types of linked list are three types
 ## single : navigation is forward only.
 ## dobuly : navigation are forward and backward.
 ## circular : last element is linked to the first element
# 0x12-singly-linked-lists
 is made up of nodes consists two parts 
 - data
 - link
# Tasks 
 ## 0. Print list 
Write a function that prints all the elements of a list-t list.
Prototype: size-t print-list(const list-t *h), and return: the number of nodes
If str is NULL, print [0] (nil).
 ## 1. List length
Write a function that returns the number of elements in a linked list_t list.
Prototype: size_t list_len(const list_t *h);
 ## 2. Add node
Write a function that adds a new node at the beginning of a list-t list.
Prototype: list-t *add_node(list_t **head, const char *str);
 ## 3. Add node at the end
Prototype: list-t *add_node_end(list_t **head, const char *str);
 ## 4. Free list
Prototype: void free-list(list-t *head);
