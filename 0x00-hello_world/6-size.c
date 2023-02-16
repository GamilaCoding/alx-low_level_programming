#include <stdio.h>
/**
 * main - wrote a program that prints the size of types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %d byte(S)\n", (unsigned long)sizeof(a));
printf("Size of a char: %d byte(S)\n", (unsigned long)sizeof(b));
printf("Size of a char: %d byte(S)\n", (unsigned long)sizeof(d));
printf("Size of a char: %d byte(S)\n", (unsigned long)sizeof(c));
printf("Size of a char: %d byte(S)\n", (unsigned long)sizeof(f));
return (0);
}
