#include <stdio.h>
#include "lists.h"

/**
*print_list - function print all the elements of list_t.
*@h: element of list.
*Return: the number of nodes.
*/

size_t print_list(const list_t *h)

{
if (h == NULL)
{
printf ("[0] (nil)\n");
}

size_t nodes = 0;
while (list_t->h != NULL)
{
printf("[%d]%s\n",list_t->len, list_t->h);
list_t = list_t.next->h;
nodes++;
}

return (nodes);

}
