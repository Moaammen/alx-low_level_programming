#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that print all the elements of a list.
 * @h: pointer to first element in list.
 * Return: the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
size_t counter;
counter = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
counter++;
}
return (counter);
}
