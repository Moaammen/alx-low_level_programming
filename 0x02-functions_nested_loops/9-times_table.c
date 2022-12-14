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
int i;
int n;
int result = (i * n);
for (i = 0; i <= 9; i++)
{
for (n = 0; n <= 9; n++)
{
_putchar (result);
_putchar (',');
_putchar (' ');
}
_putchar ('\n');
}
}
