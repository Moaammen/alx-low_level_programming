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
int num_1;
int num_2;
int result = num_1 * num_2;
for (num_1 = 0; num_1 <= 9; num_1++)
{
for (num_2 = 0; num_2 <= 9; num_2++)
{
_putchar (result);
_putchar (',');
_putchar (' ');
}
_putchar ('\n');
}
}
