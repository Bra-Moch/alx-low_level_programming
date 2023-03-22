#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * @n: integer n
 *
 * Return: void data type
 */

void print_to_98(int n)
{
	int a;

	if (n >= 0 && n <= 98)
	{
		for (a = n ; a <= 98; a++)
		{
			printf("%d, ", a);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (a = n ; a <= 98 ; a++)
		{
			printf("%d, ", a);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d, ", a);
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d, ", n);
	}
}
