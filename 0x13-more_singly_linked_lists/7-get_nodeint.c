#include <stdio.h>
#include "lists.h"
/**
 *get_nodeint_at_index - prints a node at given index
 *@head: pointer
 *@index: agiven integer
 *
 *Return: the node at a given index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (count < index)
	{
		count++;
		head = head->next;
	}
	if (!head)
	{
		return (NULL);
	}
	return (head);
}
