#include "lists.h"
#include <stdlib.h>

/**
*delete_nodeint_at_index - eletes the node at index index of
*a listint_t linked list.
*@head:linked list
*@index:the index of the list where the new node should be added
*Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *l, *t;

	if (index == 0)
	{
		l = (*head)->next;
		free(*head);
		*head = l;
		return (1);
	}
	l = *head;
	t = (*head)->next;
	if (!t || t->next == NULL)
		return (-1);
	while (t)
	{
		i++;
		if (index == i)
		{
			l->next = t->next;
			free(t);
			return (1);
		}
		l = l->next;
		t = t->next;
	}
	return (-1);

}
