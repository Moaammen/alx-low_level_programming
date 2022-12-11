#include <stdio.h>
/**
 *main - Entry Point
 *
 *Description: print base 16 hexadicemal
 *
 *Return: 0 Success
 *
 */
int main(void)
{
char i;

for (i = '0'; i <= '9'; i++)

{
putchar (i);

}

 for (i = 'a'; i <= 'f'; i++)

{

putchar (i);

}


putchar ('\n');

return (0);

}
