#include "main.h"

/**
 *print_last_digit - fucntion for the last digit
 *Description: print the last digit
 *@n: integer
 *Return: the last digit
 */
int print_last_digit(int n)
{
int last_digit;
if (n < 0)
{
last_digit = (-1 * (n % 10));
_putchar ('0' + last_digit);
return (last_digit);
}
else
{
last_digit = n % 10;
_putchar ('0' + last_digit);
return (last_digit);
}
}
