#include "main.h"
/**
 *jack_bauer - function
 *
 *Description: print 24 hours
 *
 *Return : 0 Success
 */
void jack_bauer(void)
{
char h1;
char h2;
char m1;
char m2;

for (h1 = '0'; h1 <= '2'; h1++)
{
for (h2 = '0'; h2 <= '9'; h2++)
{
for (m1 = '0'; m1 <= '5'; m1++)
{
for (m2 = '0'; m2 <= '9'; m2++)
{
_putchar (h1);
_putchar (h2);
_putchar (':');
_putchar (m1);
_putchar (m2);
_putchar ('\n');
if (h1 == '2' && h2 == '3' && m1 == '5' && m2 == '9')
{
return;
}
}
}
}
}
}
