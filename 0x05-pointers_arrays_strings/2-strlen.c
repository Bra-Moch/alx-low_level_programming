#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: a string
 * Description: this will return the length of a string
 * Return: 0
 */

int _strlen(char *s);
{
	int len = 0;

	for (*s++;)
		len++;

	return (len);
}
