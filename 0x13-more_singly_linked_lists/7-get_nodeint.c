#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the head of the linked list
 * @index: the index of the node to return
 *
 * Return: a pointer to the nth node of the linked list, or NULL if the index
 * is invalid or if the linked list is empty.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int current_index = 0;

	while (current_node != NULL && current_index < index)
	{
		current_node = current_node->next;
		current_index++;
	}
	if (current_index != index)
	{
		return (NULL);
	}

	return (current_node);
}
