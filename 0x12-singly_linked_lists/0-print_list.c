#include <stdio.h>
#include "lists.h"

/**
*print_list - function print all the elements of list_t.
*@h: element of list.
*Return: the number of nodes.
*/

size_t print_list(const list_t *h)

{
size_t nodes;
nodes = 0;


while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
nodes++;
}
return (nodes);
}
