#ifndef LISTS_H
#define LISTS_H


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
*@h: element of list.
*Return: the number of nodes.
*/

size_t print_list(const list_t *h);
#endif
