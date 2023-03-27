#include "main.h"

/**
 * _puts - prints a string and a new line
 * @str: the string
 *
 * Return: the length of the string
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}
