#include "main.h"
/**
 * listint_len - a function that returns number of
 * elements in a linked list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
