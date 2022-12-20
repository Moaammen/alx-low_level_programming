#include "main.h"

/**
 * puts - function print every other character
 * @str: string
 *Return: nothing
 */

void puts2(char *str)
{
while (str != '\0' && (str / 2) == 0)
{
_putchar(str);
}
_putchar ('\n');
}
