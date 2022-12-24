#include <stdio.h>

/**
*main - entry point
*Description: print first fibonacci numbers
*Return: 0 success
*/

int main(void)
{
int i;
int n = 50;
int numb1 = 1;
int numb2 = 2;
int numb3 = numb1 + numb2;

printf("%d, %d, ", numb1, numb2);

for (i = 0; i <= 50; i++)
{
numb1 = numb2;
numb2 = numb3;
numb3 = numb1 + numb2;
printf("%d, ", numb3);
}

return (0);




}
