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
int a;
int b;
int c;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (c <= 9)
{
_putchar ((c % 10) + '0');
_putchar (',');
_putchar (' ');
_putchar (' ');
}
else
{
_putchar ((c / 10) + '0');
_putchar ((c % 10) + '0');
_putchar (',');
_putchar (' ');
}
}
_putchar ('\n');
}
}
