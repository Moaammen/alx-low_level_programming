#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: print pair of numbers
 *
 *Return: 0 success
 *
 */

int main(void)
{
int st;
int nd;
int third;
int fourth;

for (st = '0'; st <= '9'; st++)
{
for (nd = '0'; nd <= '9'; nd++)
{
for (third = st; third <= '9'; third++)
{
for (fourth = nd + 1; fourth <= '9'; fourth++)
putchar (st);
putchar (nd);
putchar (' ');
putchar (third);
putchar (fourth);
if (!((st == '9' && nd == '8') &&
(third == '9' && fourth == '9')))
{
putchar (',');
putchar (' ');
}
}
}
}
putchar ('\n');
return (0);
}
