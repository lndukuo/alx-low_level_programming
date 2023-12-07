#include "lists.h"
/**
 * get_dnodeint_at_index - Return the nth node of a doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting from 0.
 * Return: Pointer to the nth node, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j = 0;

	while (head != NULL)
	{
		if (j == index)
			return (head);

		head = head->next;
		j++;
	}
	return (NULL);
}
