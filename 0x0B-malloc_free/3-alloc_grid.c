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
int i, j;

if ((width <= 0) || (height <= 0))
{
return (NULL);
}

ptr = malloc((width * sizeof(int*));

for (i = 0; i < width; i++)
{
ptr[i] = malloc(height * sizeof(int));
}

if (ptr == NULL)
{
return (NULL);
}

for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
ptr[i][j] = 0;
}
}
return (ptr);
for (i = 0; i > width; i++)
{
free (ptr[i]);
}
free (ptr);
}
