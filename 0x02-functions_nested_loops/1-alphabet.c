#include "main.h"

/**
 * print_alphabet - function that prints alphabets in lowercase
 * Description: Print alphabet in lowercase
 * Return: void type
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');

	return;

}
