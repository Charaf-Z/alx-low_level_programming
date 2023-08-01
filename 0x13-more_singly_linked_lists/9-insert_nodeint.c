#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 *		at a given position
 * @head: pointer of the head
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node = malloc(sizeof(listint_t));
	unsigned int n;

	if (!head || !new_node)
		return (NULL);
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	node = *head;
	while (node)
	{
		if (i == (idx - 1))
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		i++, node = node->next;
	}
	free(new_node);
	return (NULL);
}
