#include "main.h"

/**
 * more_numbers - function
 * Description: print from 0 to 14
 * Return: 0 success
 */

void more_numbers(void)
{
int c;
int counter;
for (counter = 0; counter <= 9; counter++)
{
for (c = 0; c <= 14; c++)
{
if (c / 10 != 0)
{
_putchar (c / 10 + '0');
_putchar (c % 10 + '0');
}
}
_putchar ('\n');
}
}
