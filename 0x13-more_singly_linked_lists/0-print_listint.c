#include <stdio.h>
#include "lists.h"
/**
 *print_listint - prints elements of alinked list
 *@h: pointer to a structure
 *
 *Return: the number of elments in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
