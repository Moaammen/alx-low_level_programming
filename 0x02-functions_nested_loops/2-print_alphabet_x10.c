#include "main.h"

/**
 *print_alphabet_x10 - function
 *
 *Description: print_alphabet_x10
 *
 *Return: 0 Success
 */

void print_alphabet_x10(void)
{
char a = 'a';
char b = '0';
while (b <= '9')
{
_putchar ('\n');
b++;
while (a <= 'z')
{
_putchar (a);
a++;

}
}
}
