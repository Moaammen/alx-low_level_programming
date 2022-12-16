#include "main.h"

/**
 * print_triangle - function
 * @size: integer
 * Return: 0 success
 */

void print_triangle(int size)
{
if (size > 0)
{
int w;
int h;
/**counter loop should count number of rows*/
for (w = 1; w <= size; w++)
{

/** the first inner loop should print whitespace*/
for (h = w; h < size; h++)
{
_putchar (' ');
}
/** this loop should print # in each row*/
for (h = 1; h <= w; h++)
_putchar ('#');
}
_putchar ('\n');
}
else
{
_putchar ('\n');
}
}
