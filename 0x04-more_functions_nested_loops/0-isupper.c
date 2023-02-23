#include "main.h"
/**
 * _isupper - A function that checks for uppercase character
 * @c: character
 * Retrun: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	int i;
for (i = 'A'; i <= 'Z'; i++)
{
if (i == c)
{
return (1);
}
}
return (0);
}
