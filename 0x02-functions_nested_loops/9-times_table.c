#include "main.h"

/**
 * times_table - print multiplication table
 *
 * Return: void data type
 */
void times_table(void)
{
	int n1;
	int n2;
	int multiply;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			multiply = (n1 * n2);
			if (n2 == 0)
			{
				_putchar('0' + multiply);
			}
			else if (multiply <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + multiply);
			}
			else if (multiply > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (multiply / 10));
				_putchar('0' + (multiply % 10));
			}
		}
		_putchar('\n');
	}
}
