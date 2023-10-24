#include "lists.h"
/**
 * print_listint - prints all elements of the listint list.
 * @h: a pointer
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes_num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_num++;
	}
	return (nodes_num);
}
