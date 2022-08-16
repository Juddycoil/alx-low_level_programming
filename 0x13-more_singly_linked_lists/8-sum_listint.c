#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data (n) of a list.
 * @head: A pointer to the head of the list.
 *
 * Return: 0 or sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

