#include "main.h"

/**
 *
 *print_last_digit - fucntion for the last digit
 *
 *Return: the last digit
 *
 */
int print_last_digit(int n)
{
int last_digit;
 if (n < 0)
{
last_digit = (-1 * (n % 10));
return (last_digit);
}
else
{
last_digit = n % 10;
return (last_digit);
}
}
