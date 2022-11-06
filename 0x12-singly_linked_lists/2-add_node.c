#include "lists.h"
/**
 * _strlen - returnd the legnth of a stirng
 * @s: string s
 * Return: length of string
 */
int _strlen_recursion(char *s);

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the first element of the list
 * @str: string to set in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *newStr;

	if (!str)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newStr = strdup(str);
	if (!newStr)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(newStr);
	newNode->str = newStr;
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
