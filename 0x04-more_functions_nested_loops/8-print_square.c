#include "main.h"

/**
 * print_square - function
 * @size: integer
 * Return: 0 success
 */

void print_square(int size)
{
if (size <= 0)
{
_putchar ('\n');
}
else
{
int h;
int w;
for (h = 1; h <= size; h++)
{
for (w = 1; w <= size; w++)
{
_putchar ('#');
}
_putchar ('\n');
}
}
}
