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

printf("Size of char: %i byte(s)\n", (unsigned long)sizeofo(char));
prtintf("Size of an int: %i byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %i byte(S)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %i byte(s)\n". (unsigned long)sizeof(long long int));
printf("Size of a float: %i byte(S)\n", (unsigned long)sizeof(float));
return(0);
}
