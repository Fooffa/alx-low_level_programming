#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint_end -  adds a new node at the end of a list_t list.
*@head:linked list
*@n: input as an int
*Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *last;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (*head == NULL)
	{	*head = add;
		return (add);
	}

	last = *head;
	while (last->next)
		last = last->next;
	last->next = add;
	return (add);
}
