#include "lists.h"
/**
 * add_node_end - function that adds new nodes at the end of list
 * @str: string to be added on new node
 * @head: reference to head of linked list
 * Return: the address of head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nn = malloc(sizeof(list_t));
	list_t *temp = *head;

	nn->str = strdup(str);
	nn->len = strlen(str);
	nn->next = NULL;

	if (*head == NULL)
		*head = nn;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = nn;
	}
	return (nn);
}
