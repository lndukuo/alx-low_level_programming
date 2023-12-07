#include "lists.h"
/**
 * sum_dlistint - Return the sum of all the data of a doubly linked
 * list
 * @head: Pointer to the head of the list
 * Return: sum of all the data, or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
