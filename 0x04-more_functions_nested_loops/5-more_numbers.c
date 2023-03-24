#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers from 0 to 14 10x
 *
 * Return: void data type
 */

void more_numbers(void)
{
	int k;
	int q;

	for (k = 0; k <= 14; k++)
	{
		for (q = 0; q <= 9; q++)
		{
			if (k > 9)
			{
				_putchar(k / 10 + '0');
			}
			_putchar(k % 10 + '0');

		_putchar('\n');

		}
	}
}
