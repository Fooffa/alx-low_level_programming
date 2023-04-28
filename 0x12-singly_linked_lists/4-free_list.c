#include "lists.h"
#include <stdlib.h>

/**
*free_list -   frees a list_t list.
*@head:linked list
*/

void free_list(list_t *head)
{
	list_t *l;

	if (!head)
		return;
	while (head->next)
	{
		free(head->str);
		l = head->next;
		free(head);
		head = l;
	}
	free(head->str);
	free(head);

}
