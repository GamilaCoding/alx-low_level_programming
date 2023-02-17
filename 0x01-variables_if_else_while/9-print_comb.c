#include <stdio.h>

/**
*main - Entry point 
*Return: Always 0 (success)
 */
int main(void)
{
int n;


n = 48;

while (n <= 57)
/*57 corresponds with ascii character9*/
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
n++;
}
putchar ('\n');
return (0);
}
