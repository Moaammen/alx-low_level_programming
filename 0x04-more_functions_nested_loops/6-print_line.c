#include "main.h"

/**
 * print_line - function print _
 * @n: integer
 * Return: 0 Success
 */

void print_line(int n)
{
int counter;
for (counter = 0; counter <= n; counter++)
{
if (n <= 0)
{
_putchar ('\n');
}
_putchar ('_');
}
_putchar ('\n');
}
