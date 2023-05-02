#include "lists.h"

/**
 * pop_listint - Delete the head node of our `listint_t` linked list
 * @head: double pointer to head node of linked list
 * Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *h;

	if (*head == NULL)
		return (0);

	h = *head;
	n = h->n;
	*head = h->next;
	free(h);

	return (n);
}
