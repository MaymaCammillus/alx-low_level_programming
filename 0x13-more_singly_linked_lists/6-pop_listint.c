#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * Return: If the linked list is empty - 0.
 *         Otherwise n.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);

	tmp = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (i);
}
