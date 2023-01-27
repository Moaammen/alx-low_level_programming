#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
*print_list - function print all the elements of list_t.
*@h: element of list.
*Return: the number of nodes.
*/

size_t print_list(const list_t *h)

{
size_t nodes;
nodes = 0;
if (h == NULL)
{
printf ("[0] (nil)\n");
exit(1);
}

while (h != NULL)
{
printf("[%d]%s\n",h->len, h->str);
h = h->next;
nodes++;
}

return (nodes);

}
