#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: pointer to the first node in the linked list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;

		free(head);
		head = temp;
	}
}

