#include "main.h"

/**
 * print_diagonal - function
 * @n: integer
 * Return: 0 success
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar ('\n');
}
else
{
int i;
int j;
for (i = 1; i <= n; i++)
{
for (j = 1; j < i; j++)
{
_putchar (' ');
_putchar ('\\');
_putchar ('\n');
}
}
}
}
