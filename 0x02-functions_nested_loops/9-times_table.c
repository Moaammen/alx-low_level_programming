#include "main.h"

/**
 *times_table - function
 *
 *Description: print times table
 *
 *Return: 0 Success
 */
void times_table(void)
{
int h;
int d;
int result = h * d;
for (h = 0; h <= 9; h++)
{
for (d = 0; d <= 9; d++)
{
_putchar (result);
_putchar (',');
_putchar (' ');
}
_putchar ('\n');
}
}
