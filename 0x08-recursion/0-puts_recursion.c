#include "main.h"


void _puts_recursion(char *s);
{
	if (*s)
	{
		_putchar(*S);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
