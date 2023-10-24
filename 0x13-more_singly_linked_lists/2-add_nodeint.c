#include "lists.h"
/**
 * add_nodeint - adds a node at the head of a linked list
 * @head: pointer to the 1st node
 * @n: data of the new node
 * Return: pointer to the new node, Null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *added_node;

	added_node = malloc(sizeof(listint_t));
	if (!added_node)
		return (NULL);
	added_node->n = n;
	added_node->next = *head;
	*head = added_node;
	return (added_node);
}
