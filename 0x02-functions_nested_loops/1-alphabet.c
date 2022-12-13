#include "main.h"

void print_alphabet(void)
{
char a;
while (a <= 'z')
{
_putchar (a);
a++;

}
}

int main(void)
{
print_alphabet ();
_putchar('\n');

return (0);
}
