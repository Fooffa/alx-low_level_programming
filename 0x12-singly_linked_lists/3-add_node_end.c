#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
*add_node_end -  adds a new node at the end of a list_t list.
*@head:linked list
*@str: input as a string
*Return: the address of the new element, or NULL if it failed
*
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add;
	list_t *last;
	int i = 0;

	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);
	while (str[i])
		i++;
	add->str = strdup(str);
	add->len = i;
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
