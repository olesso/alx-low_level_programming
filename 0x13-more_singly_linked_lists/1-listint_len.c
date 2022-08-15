#include "lists.h"

/**
 * listint_len - list al the elements of a list.
 * @h: head of a list.
 *
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h !=NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
