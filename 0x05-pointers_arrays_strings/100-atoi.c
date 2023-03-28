#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int a = 0;
	int b = 1;
	int v = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			b *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			v = 1;
			a = (a * 10) + (s[c] - '0');
			c++;
		}

		if (v == 1)
		{
			break;
		}

		c++;
	}

	a *= b;
	return (a);
}
