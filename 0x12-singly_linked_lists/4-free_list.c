#include "lists.h"

/**
 * free_list - frees a list
 * @head: points to the beginnin of list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *freelist;

	while (head)
	{
		freelist = head;
		head = head->next;
		free(freelist->str);
		free(freelist);
	}
}
