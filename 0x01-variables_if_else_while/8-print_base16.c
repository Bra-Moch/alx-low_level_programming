#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase and a new line.
 * Return: 0
 */

int main(void)
{
	char digit;
	char letter;

	for (digit = 0; digit < 10; digit++)
		putchar(digit + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);

}
