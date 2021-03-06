#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a
 * listint_t list
 * @head: listint_t list to handle
 * @n: value to add into object
 *
 *
 * Return: the address of the new element, or NULL if it failed
 * On error: -1 inapropiate entry
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *value = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (value && value->next)
		value = value->next;

	if (value)
		value->next = new;
	else
		*head = new;

	return (new);
}
