#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_num;

	for (node_num = 0; h != NULL; node_num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_num);
}
