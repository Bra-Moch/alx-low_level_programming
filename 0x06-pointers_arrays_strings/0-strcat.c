#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: destination of concatenated string
 * @src: char string
 *
 * Return: char value
 */

char *_strcat(char *dest, char *src)
{
	int k;
	int q;

	for (q = 0; dest[q] != '\0'; q++)
	{
		; /* nothing in here */
	}

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[q + k] = src[k];
	}
	dest[q + k] = '\0';
	return (dest);
}
