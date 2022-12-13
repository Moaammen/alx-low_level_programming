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
int b = 0;

for (b = 0; b < 10; b++)
{
_putchar ('\n');
for (a = 'a'; a <= 'z'; a++)
{
_putchar (a);
}
}
