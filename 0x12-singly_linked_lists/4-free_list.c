#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
list_t *curr;

while ((curr = head) != NULL)
{
	head = head->next;
	free(curr->str);
	free(curr);
}
}
