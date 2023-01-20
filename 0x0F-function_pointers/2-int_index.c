#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
*int_index - function that searches for an integer.
*@array: array of integers.
*@size: integer.
*@cmp: pointer to function that take int parmeter.
*Return: the index of the first element .
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-1);

if ((array != NULL) && (cmp != NULL))
{

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
return (-1);
}
