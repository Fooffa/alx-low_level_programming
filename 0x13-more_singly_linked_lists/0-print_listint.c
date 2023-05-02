#include "lists.h"
/**
*print_listint -  prints all the elements of a list_t list.
*@h:pointer to the structer
*Return: the number of nodes
*
*/

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
