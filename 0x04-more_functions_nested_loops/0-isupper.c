#include "main.h"
/**
 * _isupper - Checks for uppercase character
 * @c: char
 * Retrun: 0
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
