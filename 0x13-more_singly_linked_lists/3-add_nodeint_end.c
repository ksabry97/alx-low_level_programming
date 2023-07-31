#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint_end - adds a node to the begining of the list
 *@head: pointer to a pointer
 *@n: agiven integer
 *
 *Return: the added node to the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = *head;
	temp = malloc(sizeof(listint_t));
	if (!temp)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (temp);
}
