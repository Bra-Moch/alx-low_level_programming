#include "main.h"

/**
 * _memset - function fills memory with constant byte
 *
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes to fill pointer by s
 *
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
