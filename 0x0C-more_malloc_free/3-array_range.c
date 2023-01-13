#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*array_range -  function that creates an array of integers.
*@min: integer
*@max: integer
*Return: the pointer to the newly created array.
*/

int *array_range(int min, int max)
{

int *ptr;
int elem;
int i, j = 0;
if (min > max)
	return (NULL);

elem = (max - min) + 1;
ptr = malloc(elem *sizeof(int));
	if (ptr == NULL)
		return (NULL);

for (i = min; i <= max; i++)
{

	ptr[j] = i;

	j++;

}

return (ptr);

}

