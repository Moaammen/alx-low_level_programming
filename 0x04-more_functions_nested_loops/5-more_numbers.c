#include "main.h"

/**
 * more_numbers - function
 * Description: print from 0 to 14
 * Return: 0 success
 */

void more_numbers(void)
{
int c;

for (c = 0; c <= 14; c++)
{
_putchar (c / 10);
_putchar (c % 10);
_putchar ('\n');
}
}
