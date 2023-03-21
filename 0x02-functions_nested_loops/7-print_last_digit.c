#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @num: ASCII character
 *
 * Return: int data type
 */

int print_last_digit(int num)
{
	int v;

	v = num % 10;
	if (num < 0)
		v = -v;
	_putchar(v + '0');
	return (v);
}
