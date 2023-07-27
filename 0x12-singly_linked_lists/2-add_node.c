#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_node - adds a node to the begining of the list
 *@head: pointer to a pointer
 *@str: agiven string
 *
 *Return: the added node to the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	newNode->str = str;
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	if (newNode)
	{
		return (newNode);
	}
	else
	{
		return (NULL);
	}
}
