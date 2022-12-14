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
int x;
int y;
int r = x * y;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
_putchar (r);
_putchar (',');
_putchar (' ');
}
_putchar ('\n');
}
}
