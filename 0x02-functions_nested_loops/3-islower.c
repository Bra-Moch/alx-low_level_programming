#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: Is an ASCII character
 * Return: int type
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

	_putchar('\n');
}