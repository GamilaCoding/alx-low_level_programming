#include "main.h"

/**
 * print_triangles - prints a triangle using # character.
 * @size: The size of the triangle.
 * Return: nothing
 */

void print_triangle(int size)
{
	int l, b, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (l = 0; l < size; l++)
		{
			for (b = 0; l < size; l++)
			{
			for (b = 0; b < size; b++)
{
	s = size - l - 1;
if (b < s)
{
_putchar(' ');
}
else
_putchar('#');
}
_putchar('\n');
}
}
