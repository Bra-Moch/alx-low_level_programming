#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define pass_len 10
/**
 * main - Generates random valid passwords for the program 101-crackme.
 *
 * Return: 0
 *
 */

int main(void)
{
	int i, total = 2772;
	int ascii_value;

	srand(time(NULL));
	/* initialize random number generator */

	for (i = 0; i < pass_len; i++)
	{
		ascii_value = rand() % 125 + 1;
		/* generate a random ASCII value between 1 and 125 (inclusive) */

		printf("%c", ascii_value);
		total -= ascii_value;
	}
	printf("%c", total);
	return (0);
}
