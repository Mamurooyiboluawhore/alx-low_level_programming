#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line
 * @size: Different sizes of triangle
 * Return: triangle
 */
void print_triangle(int size)
{
	int i;
	int k;
	int j;
if (size <= 0)
{
	_putchar('\n');
}
else
{
	for (i = 0; i <= (size - 1); i++)
	{
		for (k = 0; k <= (size - 1) - i; k++)
		{
			_putchar('');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar(35);
		}
		_putchar(\n);
	}
}
}

