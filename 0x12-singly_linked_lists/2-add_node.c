#include "lists.h"

/**
 * add_node - adds a new node at
 * the beginning of a list_t list.
 * @head: pointer to the linked list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	new->next = *head;
	new->len = strlen(str);
	new->str = strdup(str);
	*head = new;
	return (new);
}
