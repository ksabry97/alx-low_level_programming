#include <stdio.h>
#include "lists.h"
/**
 *insert_nodeint_at_index - inserts an element at agiven index
 *@head: pointer to a pointer
 *@idx: unsigned  integer
 *@n: integer
 *
 *Return: the added node to the list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *ptr;

	temp = malloc(sizeof(listint_t));
	ptr = *head;
	temp->n = n;
	for (i = 0; i < (idx - 1); i++)
	{
		ptr = ptr->next;
	}
	temp->next = ptr->next;
	ptr->next = temp;
}
