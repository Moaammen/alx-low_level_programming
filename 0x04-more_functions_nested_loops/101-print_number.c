#include "main.h"

/**
*print_number - function
*Description: print integer using putchar
*@n: integer
*Return: 0 success
*/

void print_number(int n)
{
if (n < 0)
{
putchar('-');
n = n * -1;
if (n / 10 == 0)
{
putchar(n % 10 + '0');
}
else if (n / 100 == 0)
{
putchar(n / 10 + '0');
putchar(n % 10 + '0');
}
else if ((n / 1000 == 0 )|| (n / 1000 < 0))
{
putchar(n / 100 + '0');
putchar((n / 100) / 10 + '0');
putchar(n % 10 + '0');
}
else
{
putchar(n / 1000 + '0');
putchar((n / 1000) / 100 + '0');
putchar((n / 100) / 10 + '0');
putchar(n % 10 + '0');
}
}

else
{
if (n / 10 == 0)
{
putchar(n % 10 + '0');
}
else if (n / 100 == 0)
{
putchar(n / 10 + '0');
putchar(n % 10 + '0');
}
else if ((n / 1000 == 0)|| (n / 1000 < 0))
{
putchar(n / 100 + '0');
putchar((n / 100) / 10 + '0');
putchar(n % 10 + '0');
}
else
{
putchar(n / 1000 + '0');
putchar((n / 1000) / 100 + '0');
putchar((n / 100) / 10 + '0');
putchar(n % 10 + '0');
}
}
}

