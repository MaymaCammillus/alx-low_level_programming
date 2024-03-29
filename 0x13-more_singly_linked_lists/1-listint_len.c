#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 *               in a linked listint_t list.
 * @a: A pointer to the head of the listint_t list.
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	int a;

	for (a = 0; h; a++)
		h = h->next;
	return (a);
}
