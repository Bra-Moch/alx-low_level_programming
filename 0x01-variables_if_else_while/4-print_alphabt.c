#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase, followed by a new line
 * Return: 0
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		if (alphabets != 'e' && alphabets != 'q')
			putchar(alphabets);

	putchar('\n');

	return (0);
}
