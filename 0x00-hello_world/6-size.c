#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
printf("Size of a char: %u byte(s)\n", (unsigned long)sizeof(char));
prtintf("Size of an int: %u byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %u byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %u byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %u byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
