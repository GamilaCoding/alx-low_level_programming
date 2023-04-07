#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*get_bit - returns the value of  abit at a given index
*@n: check bits
*@index: whch to check bit
*Return: the value of the bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int div, res;
if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);
div = 1 << index;
res = n & div;
if (res == div)
return (1);
return (0);
}
