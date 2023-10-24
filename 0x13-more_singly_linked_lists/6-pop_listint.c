#include "lists.h"
/**
 * pop_listint - deletes the headnode of a linked list
 * @head: head of the linked list
 * Return: data of the head node.
 */
int pop_listint(listint_t **head)
{
	int fnode;
	listint_t *h;
	listint_t *curr_n;

	if (*head == NULL)
		return (0);

	curr_n = *head;

	fnode = curr_n->n;

	h = curr_n->next;

	free(curr_n);

	*head = h;

	return (fnode);
}
