#include <stdio.h>

/**
 * main - sums nultplies of 3 or 5
 *
 * Description: multiples between 0 and 1024
 * Return: Always(0) Success
 */

int main(void)
{
int start;
int end = 1024;
int sum = 0;

for (start = 0; start < end; start++)
{
if ((start % 3) == 0 || (start % 5) == 0)
{

sum = sum + start;

}
else
{
continue;
}

}

printf("%d", sum);
printf("\n");

return(0);
}
