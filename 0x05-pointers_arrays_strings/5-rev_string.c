#include "main.h"

/**
 * rev_string - function print string in reverse
 * @s: character
 */

void rev_string(char *s)
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
