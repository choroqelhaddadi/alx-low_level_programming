#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to linked list
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	int x = 0;
	const list_t *new = h;

	while (new)
	{
		if (new->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", new->len, new->str);
		}
		new = new->next;
		x++;
	}
	return (x);
}
