#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the head of the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int df;
	listint_t *node;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		df = *h - (*h)->next;
		if (df)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}

