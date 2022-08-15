#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * Function that prints out elements of a linked list
 * include the main function
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h);
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h= h->next;
		nnodes++;
	}
	return (nnodes);
}
