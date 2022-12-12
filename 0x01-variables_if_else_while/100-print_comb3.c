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


for (y = '0'; y <= '9'; y++)

{

for (i = (y + 1); i <= '9'; i++)

{

putchar(y);
putchar(i);

if (y != '8' || i != '9')


{

putchar (',');
putchar (' ');

}

}

}

putchar ('\n');

return (0);

}
