#include "main.h"
#include <stdio.h>

/**
*print_diagsums - function.
*Description: function that prints the sum of the two diagonals of a square matrix of integers.
*@a: array.
*@size: integer.
*Return: 0 success.
*/

void print_diagsums(int *a, int size)

{

int i, j;
int sum = 0;
int sum2 = 0;
for (i = 0; i < size; i++)
{

j = (i * size) + i;
sum += a[j];

}
for (i = 1; i <= size; i++)
{

j = (i * size) - i;
sum2 += a[j];

}

printf("%d, %d\n", sum, sum2);

}
