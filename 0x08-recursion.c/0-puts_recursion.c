#include "main.h"

/**
*_puts_recursion - Function.
*Description: function that prints a string, followed by a new line.
*@s: character
*Return: 0 success.
*/

void _puts_recursion(char *s)

{

if (*s == '\0')
{
return;
}
_putchar (*s);
_puts_recursion(char s + 1);
}