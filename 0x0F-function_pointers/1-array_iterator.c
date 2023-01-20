#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
*array_iterator -  function that executes a function given as a
*parameter on each element of an array.
*@array: array of integers.
*@size: integer.
*@action: pointer to function take ine parmeter.
*Return: 0 success.
*/
void array_iterator(int *array, size_t size, void (*action)(int))

{

int i;

for (i = 0; i < size; i++)
{

action(array[i]);

}

}
