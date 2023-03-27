#include "main.h"

/**
* print_rev - printing a string in reverse
* @dest: the string to be printed in reverse
* @src: this is the copied file 
* Return: copy of the source
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src)
		dest[i++] = *src++;

	dest[i] = '\0';

	return (dest);
}
