#include "main.h"

/**
*print_number - function
*Description: print integer using putchar
*@n: integer
*Return: 0 success
*/

void print_number(int n)
{
if (n <= 9 || n >= -9)
{
_putchar(n + '0');
}
else if (n > 9 && n <= 99 || n >= -99 && n < -9)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else if (n > 99 && n <= 999 || n >= -999 && n < -99)
{
_putchar((n / 100) + '0');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else if (n > 999 && n <= 9999 || n >= -9999 && n < -999)
{
_putchar((n / 1000) + '0');
_putchar((n / 100) + '0');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}

}
