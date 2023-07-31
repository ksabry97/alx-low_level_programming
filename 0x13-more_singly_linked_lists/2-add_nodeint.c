#include <stdio.h>
#include "lists.h"
/**
 *add_nodeint - adds a node to the begining of the list
 *@head: pointer to a pointer
 *@n: agiven integer
 *
 *Return: the added node to the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
