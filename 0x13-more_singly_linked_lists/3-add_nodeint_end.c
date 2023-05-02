#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *new_node, *temp;

	new_node = temp = head;
	while (new_node && temp && temp->next)
	{
		new_node = new_node->next;
		temp = temp->next->next;
		if (new_node == temp)
		{
			new_node = head;
			break;
		}
	}
	if (!new_node || !temp || !temp->next)
		return (NULL);
	while (new_node != temp)
	{
		new_node = new_node->next;
		temp = temp->next;
	}
	return (temp);
}
