#include <stdio.h>
#include "lists.h"
/**
 *sum_listint - adds all the list elements
 *@head: pointer
 *
 *Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	sum = head->n;
	while (head->next != NULL)
	{
		head = head->next;
		sum = sum + (head->n);
	}
	return (sum);
}
