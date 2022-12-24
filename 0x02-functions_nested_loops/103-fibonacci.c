#include <stdio.h>

/**
*main - entry point
*Description:program that finds and prints the sum of the even-valued terms
*Return: 0 success
*/

int main(void)
{
int i;
long numb1 = 1;
long numb2 = 2;
long numb3;

printf("%ld, %ld", numb1, numb2);

for (i = 2; i < 50; i++)
{
numb3 = numb1 + numb2;
numb1 = numb2;
numb2 = numb3;
if (numb3 < 4000000 && (numb3 % 2) == 0)
{
printf(", %ld", numb3);

}

}
printf("\n");

return (0);
}
