#include "main.h"
/**
 * reverse_array - function
 * Description: reverse n elements of array
 * @a: array
 * @n: integer
 * Return: no return type
 */
void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
int temp;

while (start < end)
{
temp = a[start];
a[start] = a[end];
a[end] = temp;
start++;
end--;
}
}
