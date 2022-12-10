#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: print alphabets except e q
 *
 *Return: 0 Success
 *
 */
int main (void)
{
char i;

for (i = 'a'; i <= 'z' ; i++)

{

if(i == 'e')

continue;

else if(i == 'q')
continue;

putchar(i);

}
putchar('\n');
return (0);

}
