#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *fn;
	listint_t *ln;

	fn = NULL;
	ln = NULL;

	while (*head != NULL)
	{
		ln = (*head)->next;
		(*head)->next = fn;
		fn = *head;
		*head = ln;
	}

	*head = fn;
	return (*head);
}
