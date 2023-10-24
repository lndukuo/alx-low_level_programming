#include "lists.h"
/**
 * print_listint - prints all elements of the listint list.
 * @h: a pointer
 * Return: Number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n >= 0 && h->n <= 9)
			_putchar(h->n + '0');
		else if (h->n < 0)
		{
			_putchar('-');
			_putchar((h->n * -1) / 10 + '0');
			_putchar((h->n * -1) % 10 + '0');
		}
		else
		{
			_putchar(h->n / 10 + '0');
			_putchar(h->n % 10 + '0');
		}
		_putchar('\n');
		h = h->next;
		count++;
	}
	return (count);
}
