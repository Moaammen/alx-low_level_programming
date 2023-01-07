#include <stdio.h>
#include <stdlib.h>

/**
*main - entry point.
*Description: program that adds positive numbers.
*@argc: integer.
*@argv: array of strings.
*Return: number of arguments.
*/

int main(int argc, char *argv[])
{
int count;
int sum;
int result = 0;
if (argc <= 0)
{
printf("0\n");
}
else
{
for (count = 1; count < argc; count++)
{
sum = atoi(argv[count]);
if (sum == 0)
{
printf ("Error\n");
return (1);
}
else
{
result += sum;
}
}
}
printf("%d\n", result);
return (0);
}
