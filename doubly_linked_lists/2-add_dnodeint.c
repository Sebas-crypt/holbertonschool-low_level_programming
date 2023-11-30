#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head of the dlistint_t list
 * @n: integer for the new node
 * Return: NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new-> = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
