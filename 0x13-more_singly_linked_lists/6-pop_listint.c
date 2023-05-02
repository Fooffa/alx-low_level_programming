#include "lists.h"
#include <stdlib.h>

/**
*pop_listint -  that deletes the head node of a listint_t linked list
*@head:linked list
*Return:  the head node’s data (n)
*/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *l;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	l = (*head)->next;
	free(*head);
	*head = l;
	return (n);

}
