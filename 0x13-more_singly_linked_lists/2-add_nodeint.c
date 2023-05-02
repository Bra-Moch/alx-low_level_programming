#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Double pointer to the head of the list
 * @n: Integer value to be added as the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pt;

	if (head == NULL)
		return (NULL);
	pt = malloc(sizeof(listint_t));
	if (pt == NULL)
		return (NULL);
	pt->n = n;
	pt->next = *head;
	*head = pt;
	return (pt);
}
