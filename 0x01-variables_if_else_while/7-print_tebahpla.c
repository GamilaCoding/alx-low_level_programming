#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Descriptaion: prints all signal digit number of base 10
 *starting from 0, followed by new line.
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
