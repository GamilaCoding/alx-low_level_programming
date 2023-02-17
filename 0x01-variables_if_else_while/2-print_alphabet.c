#include <stdio.h>

/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	 char alp[26] = "abcdefghijklmnoqrstuvwxyz";
        int i;

        for (i = 0; i < 26; i++)
        {
		putchar(alp[i]);
        }
        putchar('\n');
        return (0);
}
