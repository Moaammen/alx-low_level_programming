#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*free_grid - unction that frees a 2 dimensional grid previously
*created by your alloc_grid function
*@grid: pointer of pointer of array.
*@height: integer.
*Return: no return.
*/
void free_grid(int **grid, int height)
{
int i;


for (i = 0; i < height; i++)
	{

	free(grid[i]);

	}

free(grid);

}
