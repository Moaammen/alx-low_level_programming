#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>


int _putchar(char c);

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

/**
*print_list - function print all the elements of list_t.
*@h: linked list.
*Return: the number of nodes.
*/

size_t print_list(const list_t *h);

/**
 * list_len -  function that returns the number of elements
 * in a linked list_t list.
 * @h: linked list
 * Return: number of elements.
*/
size_t list_len(const list_t *h);

/**
 * add_node - function that adds anew node at the beginning.
 * @head: pointer to pointer to a list.
 * @str: string in the list.
 * Return: pointer to list.
*/
list_t *add_node(list_t **head, const char *str);

#endif
