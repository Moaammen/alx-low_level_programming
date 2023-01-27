#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>



/**
 * add_node - function that adds anew node at the beginning.
 * @head: pointer to pointer to a list.
 * @str: string in the list.
 * Return: pointer to list.
*/
list_t *add_node(list_t **head, const char *str)
{

list_t *new;
size_t i;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);

for (i = 0; str[i]; i++)
;

new->len = i;
new->next = *head;
*head = new;

return (*head);

}