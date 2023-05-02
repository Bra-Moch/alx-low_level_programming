#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of listint_t linked list
 * @head: a double pointer to head node of linked list
 *
 *Return: if head node data is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *begin;
	int k;

	if (head == NULL || *head == NULL)
		return (0);
	begin = *head;
	*head = begin->next;
	k = begin->k;
	free(start);
	return (k);
}
