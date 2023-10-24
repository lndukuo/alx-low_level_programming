#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees the listint_t list.
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
