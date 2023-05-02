#include "lists.h"
#include <stdlib.h>

/**
*free_listint -   frees a list_t list.
*@head:linked list
*/

void free_listint(listint_t *head)
{
	listint_t *l;

	if (!head)
		return;
	while (head->next)
	{
		l = head->next;
		free(head);
		head = l;
	}
	free(head);

}
