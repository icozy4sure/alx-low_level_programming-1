#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n')
	else
	{
		for (i = 1; i <= m; i++)
		{
			for (j = 1 j <= size; ++j)
			{
				if ((i + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
