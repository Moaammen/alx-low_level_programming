#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - function
 *
 *Description: print to 98 or for it
 *@n: the input
 *Return: 0 success
 */

void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
if (n == 98)
{
printf("%d", n);
}
printf("\n");
}
