#include <stdio.h>
#include "lists.h"
/**
 *list_len - prints number of elements of alinked list
 *@h: pointer to a structure
 *
 *Return: the number of elments in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
