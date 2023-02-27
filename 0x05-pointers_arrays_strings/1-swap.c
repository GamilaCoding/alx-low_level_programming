#include "main.h"

/**
 *swap_int - swaps the values of two integers
 * @a: int to swap
 * @b: in to swap
 */

void swap_int(int *a, int *b)
{

	int i = *a;

	*a = *b;
	*b = i;
}
