#include "lists.h"

/**
*get_nodeint_at_index -  returns the nth node of a listint_t linked list
*@head:linked list
*@index:an input as an int
*Return: the nth node of a listint_t linked list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *l;

	if (index == 0)
		return (head);
	l = head->next;
	while (l)
	{
		i++;
		if (index == i)
			return (l);
		l = l->next;
	}
	return (NULL);
}
