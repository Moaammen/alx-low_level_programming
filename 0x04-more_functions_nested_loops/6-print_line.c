include "main.h"

/**
 * print_line - function print _
 * @n: integer
 * Return: 0 Success
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar ('\n');
}
int counter;
for (counter = 0; counter <= n; counter++)
{
_putchar ('_');
}
_putchar ('\n');
}
