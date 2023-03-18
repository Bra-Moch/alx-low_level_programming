#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10
 * Return: 0
 */

int main(void)
{
	int base_10;

	for (base_10 = 0; base_10 < 10; base_10++)
		putchar('0' + base_10);

	putchar('\n');

	return (0);

}
