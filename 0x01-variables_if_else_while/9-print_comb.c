#include <stdio.h>

/**
 *main - entry point
 *
 *Descriotion: print all single number and ,
 *
 *Return: 0 Success
 *
 */
int main(void)
{
int i;

for (i = 48; i <= 57; i++)
{
putchar (i);

if (i < 57)
{

putchar (44);

}


if (i < 57)

{

putchar (32);

}

}

putchar ('\n');

return (0);

}
