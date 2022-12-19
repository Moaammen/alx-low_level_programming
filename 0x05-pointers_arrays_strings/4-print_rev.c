#include "main.h"

/**
 * print_rev - function print string in reverse
 * @s: character
 */

void print_rev(char *s)
{
int counter = 0;
int i;

while (*s != '\0')
{
counter++;
++s;
}
s--;

for (i = counter; i > 0; i--)
{
_putchar (*s);
s--;
}
_putchar ('\n');
}
