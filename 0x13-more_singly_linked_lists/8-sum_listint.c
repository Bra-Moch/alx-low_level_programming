#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) in a listint_t linked list
 * @head: a pointer to the head of the linked list
 *
 * Return: the sum of all the data (n) in the linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
