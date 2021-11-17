#include "lists.h"
/**
 * listint_len - Counts elements in a linked list
 * @h: pointer to struct
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + listint_len(h->next));
}
