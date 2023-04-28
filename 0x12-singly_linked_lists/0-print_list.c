#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of a list_t list
 * @h: pointer to the start of the list
 * Return: the number of nodes
 * Moch-project
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}

	return (c);
}
