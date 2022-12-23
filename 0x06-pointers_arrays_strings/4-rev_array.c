#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function
 * Description: reverse n elements of array
 * @a: array
 * @n: integer
 * Return: no return type
 */
void reverse_array(int *a, int n)
{
int i = n - 1;

while (i >= 0)
{
if (i != n - 1 || i != 0)
{
printf(", ");
}
printf("%d", a[i]);
}
printf("\n");
}
