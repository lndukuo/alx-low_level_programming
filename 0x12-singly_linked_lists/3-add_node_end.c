#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of the list_t list.
 * @head: the head of the linked list.
 * @str: the string to store..
 * Return: the address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nwchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nwchar = 0; str[nwchar]; nwchar++)
		;

	new->len = nwchar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
