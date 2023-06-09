#include "lists.h"
#include <stdlib.h>

/**
*add_nodeint -  adds a new node at the beginning of a listint_t list.
*@head:linked list
*@n:an input as an int
*Return: the address of the new element, or NULL if it failed
*
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *l;

	l = malloc(sizeof(listint_t));
	if (!l)
		return (NULL);
	l->n = n;
	l->next = *head;
	*head = l;
	return (l);
}
