#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n).
 * @head: A pointer to the head of the list.
 * Return: The sum of all the data in the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
