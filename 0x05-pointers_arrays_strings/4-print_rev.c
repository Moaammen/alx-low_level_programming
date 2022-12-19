#include "main.h"

/**
 * print_rev - function print string in reverse
 * @s: character
 * Return: length Success
 */

void print_rev(char *s)
{
int counter = 0;

while (*s = '\0')
{
counter++;
_putchar (*s--);
}
_putchar ('\n');
}
