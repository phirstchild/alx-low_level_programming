#include

/**
 * pop_listint - deletes the head of a linked list
 * @head: points to the first node on the linked list
 * Return: the data in the element that was deleted
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (!head || !*head)
		return (0);

	head_data = (*data)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (head_data);
}
