#include "main.h"
/**
*clear_bit - sets the value of bit to 0 at a given index
*@n: num of i
*@index: starting from 0 of the bit you want to set
*Return: 1 if it worked, or -1 if an erroe occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
i = ~(1 << index);
*n = *n & i;
return (1);
}
