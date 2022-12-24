#include <stdio.h>

/**
*main - entry point
*Description: print first fibonacci numbers
*Return: 0 success
*/

int main(void)
{
int i;
unsigned long int numb1 = 1;
unsigned long int numb2 = 2;
unsigned long int numb3;

printf("%lu, %lu, ", numb1, numb2);

for (i = 2; i < 98; ++i)
{
numb3 = numb1 + numb2;
printf("%lu", numb3);
numb1 = numb2;
numb2 = numb3;

if (i != 97)
{
printf(", ");
}
}
printf("\n");

return (0);


}
