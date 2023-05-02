#include "lists.h"
#include <stdlib.h>

/**
*insert_nodeint_at_index -  that inserts a new node at a given position
*of a listint_t linked list
*@head:linked list
*@n: input as an integer
*@idx:he index of the list where the new node should be added
*Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *l, *t;

	l = malloc(sizeof(listint_t));
	if (l == NULL)
		return (NULL);
	l->n = n;
	if (idx == 0)
	{
		l->next = *head;
		*head = l;
		return (l);
	}
	t = *head;
	while (t)
	{
		i++;
		if (idx == i)
		{
			l->next = t->next;
			t->next = l;
			return (l);
		}
		t = t->next;
	}
	return (NULL);
}
