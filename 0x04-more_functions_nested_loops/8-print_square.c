#include "main.h"

/**
 * print_square - function that prints a square
 *
 * @size: size is an integer value
 */

void print_square(int size)
{
	int len, width;

	if (size > 0)
	{
		for (len = 1; len <= size; len++)
		{
			for (width = 1; width <= size; width++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
