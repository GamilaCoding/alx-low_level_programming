#include <stdio.h>
/**
 * main - wrote a program that prints the size of types
 * Return: 0 (Success)
 */
int main(void)
{
printf("Size of a char: %u byte(S)\n", sizeof(char));
printf("Size of an int: %u byte(S)\n", sizeof(int));
printf("Size of a long int: %u byte(S)\n", sizeof(long int));
printf("Size of a long long int: %u byte(S)\n", sizeof(long long int));
printf("Size of a float: %u byte(S)\n", sizeof(float));
return (0);
}
