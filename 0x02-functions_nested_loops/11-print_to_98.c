#include "main.h"
/**
 *print_to_98 - function
 *
 *Description: print to 98 or for it
 *
 *Return: 0 success
 */

void print_to_98(int n)
{
while (n <= 98)
{
_putchar (n);
n++;
while ( n >= 98)
{
_putchar (n);
n--;
}
}
}
