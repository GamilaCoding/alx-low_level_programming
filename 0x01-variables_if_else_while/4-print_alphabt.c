#include <stdio.h>
/**
 * main - prints the alpabet in lowercase
 * Description: get a random number and check its
 * Return: Alawys 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
putchar('\n');	
	return (0);
}
