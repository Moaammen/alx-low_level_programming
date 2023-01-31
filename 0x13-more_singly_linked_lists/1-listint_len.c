#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function return the number of nodes in list.
 * @h: pointer to the first node in list.
 * Return: the count.
*/
size_t listint_len(const listint_t *h)
{

size_t i;
i = 0;

while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
