#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: Pointer to struct
 * @str: Pointer to string
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end, *temp = *head;

	new_end = malloc(sizeof(list_t));
	if (new_end == NULL)
		return (NULL);
	new_end->str = strdup(str);
	new_end->len = strlen(str);
	new_end->next = NULL;
	if (*head == NULL)
	{
		*head = new_end;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_end;
	}
	return (new_end);
}
