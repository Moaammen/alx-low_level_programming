#include <stdio.h>

/**
*main - entry point
*Description: print first fibonacci numbers
*Return: 0 success
*/

int main(void)
{
int i;
long numb1 = 1;
long numb2 = 2;
long numb3;

printf("%ld, %ld, ", numb1, numb2);

for (i = 2; i < 50; ++i)
{
numb3 = numb1 + numb2;
printf("%ld", numb3);
numb1 = numb2;
numb2 = numb3;

if (i != 50)
{
printf (", ");
}
}
printf ("\n");

return (0);


}
