#include <stdio.h>
#include "lists.h"
/**
 *pop_listint - deletes the first element in the list
 *@head: pointer to a pointer
 *
 *Return: the first element in the list
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}
	listint_t *temp;
	temp = malloc(sizeof(listint_t));
	temp = *head;
	int m = temp->n;
	
	*head = temp->next;
	return (m);
}
