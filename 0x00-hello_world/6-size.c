#include<stdio.h>
/**
 * main - A program that prints the size of various computers types
 * Return 0 (Success)
 */
int main(void)
{
    char a;
    int b;
    long int c;
    long long int d;
    float f;

printf("Size of char: %lu byte(s)\n", (unsigned long)sizeofo(a));
prtintf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu bytes(S)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu bytes(s)\n". (unsigned long)sizeof(d));
printf("Size of a float: %lu bytes(S)\n", (unsigned long)sizeof(f));
return(0);
}
