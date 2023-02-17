#include <stdio.h>
/**
 * main - main block 
 * Description: print the alphabet in lower case
 * and the in uppercase, follow by a new line 
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= '2')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= '2')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return(0);
}
