#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*alloc_grid - function that returns a pointer to a 2d array of integers
*@width: integer.
*@height: integer.
*Return: a pointer to a 2 dimensional array of integers.
*/

int **alloc_grid(int width, int height)

{

int **ptr;
int i = 0;

if ((width <= 0) || (height <= 0))
{
return (NULL);
}

ptr = malloc((width * height) * sizeof(int));

if (ptr == NULL)
{
return (NULL);
}
while (i < (width * height))
{

**(ptr + i) = 0;
i++;
}
return (ptr);
free (ptr);
}
