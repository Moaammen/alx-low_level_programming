#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0 success
 *
 */

int main(void)
{

int i;
int y;
int h;

for (h = '0'; h <= '9'; h++)

{

for (y = (h + 1); y <= '9'; y++)

{

for (i = (y+1); i <= '9'; i++)

{

putchar (h);
putchar(y);
putchar(i);

if (h != '7' || y != '8' || i != '9')


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
