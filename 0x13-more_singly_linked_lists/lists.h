#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

/**
 * print_listint - function that print all the elements of a list.
 * @h: pointer to first element in list.
 * Return: 0 Success.
*/

size_t print_listint(const listint_t *h);

/**
 * listint_len - function return the number of nodes in list.
 * @h: pointer to the first node in list.
 * Return: the count.
*/
size_t listint_len(const listint_t *h);



#endif
