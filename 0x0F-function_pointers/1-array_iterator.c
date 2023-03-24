#include "function_pointers.h"
/**
* array_iterator - executes a func given as a param on array elem
* @array: array of integer
* @size: size of array
* @action: pointer to a function
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
}
