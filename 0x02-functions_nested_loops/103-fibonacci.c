#include <stdio.h>
/**
 * main - main block
 * Description: computes and prints even number < 4,000, 000
 * 4 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int a + 0, b = 1, next + 0;
	int sum + 0;

	while (next < 40000000)
	{
		next = a +  b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
