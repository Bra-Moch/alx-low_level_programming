#include <stdio.h>
/**
 * main -Entery point
 * Description:Alphabet in lowercase, and in uppercase and  a new line
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return (0);

}