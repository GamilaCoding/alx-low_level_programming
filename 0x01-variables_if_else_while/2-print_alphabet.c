#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: print alphabtes lower case
 * Return: 0
 */
int main(void)
{
	 char c = 'a';

	 while (c <= 'z')
        {
		putchar(c);
		c++;
        } 
        putchar('\n');
        return (0);
}
