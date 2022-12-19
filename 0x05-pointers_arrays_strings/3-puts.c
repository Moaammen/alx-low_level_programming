#include "main.h"

/**
 *_puts - function print string
 *@str: string
 *Return: 0 success
 */

void _puts(char *str)
{

while (*str != '\0')
	_putchar (*str++);

_putchar ('\n');
}
