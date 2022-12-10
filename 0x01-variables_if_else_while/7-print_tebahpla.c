#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: use putchar function to print alphabet
 *
 *Return: 0 Success
 *
 */

int main(void)
{

char i;

for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');

return (0);
}
