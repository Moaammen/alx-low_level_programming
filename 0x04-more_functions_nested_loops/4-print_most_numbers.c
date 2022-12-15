#include "main.h"

/**
 * print_most_numbers - function
 * Description: print number from 0 to 9 avoid printing 2&4
 * Return: 0 Success
 */

void print_most_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
if (c == '2' || c == '4')
{
continue;
}
_putchar (c);
}
_putchar ('\n');
}
