#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */
char *leet(char *s)
{
	int i, m;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (a[m] == s[i])
				s[i] = b[m];
		}
	}
	return (s);
}
