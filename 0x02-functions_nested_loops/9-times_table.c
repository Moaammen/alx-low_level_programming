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
char i;
char n;
char result;
for (i = '0'; i <= '9'; i++)
{
for (n = '0'; n <= '9'; n++)
{
_putchar (result);
_putchar (',');
_putchar (' ');
}
_putchar ('\n');
}
}
