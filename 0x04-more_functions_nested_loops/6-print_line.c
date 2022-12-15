#include "main.h"

/**
 * print_line - function print _
 * @n: integer
 * Return: 0 Success
 */

void print_line(int n)
{
int counter = 0;
while (counter <= n)
{
if (n <= 0)
{
_putchar ('\n');
}
_putchar (95);
counter++;
}
_putchar ('\n');
}
