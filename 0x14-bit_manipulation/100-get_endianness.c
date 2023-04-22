#include <stdio.h>
#include "main.h"
/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big edian, 1 if little endian
 */

int get_endianness(void)
{
	int i;

	if (i & 1)
		return (0);
	else
		return (1);
}
