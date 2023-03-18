#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int base10;

	for (base10 = 0; base10 < 10; base10++)
		putchar(base10 + '0');

	putchar('\n');

	return (0);

}
