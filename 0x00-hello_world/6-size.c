#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char:1 byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: 4 byte(S)\n", (unsigned long)sizeof(int));
printf("Size of a long int: 8 byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: 8 byte(S)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: 4 byte(S)\n", (unsigned long)sizeof(float));
return (0);
}
