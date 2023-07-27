#include <stdio.h>
#include "lists.h"
/**
 *print_list - prints elements of alinked list
 *@h: pointer to a structure
 *
 *Return: the number of elments in the linked list
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	if (h->str == NULL)
	{
		printf("[0] (nil)\n")
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
		count++;
		return (count);
}
