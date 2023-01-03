#include "main.h"
#include <stdio.h>
/**
*print_chessboard - function
*Description: print_chessboard.
*@a: array.
*Return: 0 success
*/

void print_chessboard(char (*a)[8])
{
int i = 0, j;

while (i < 8)
{
	for (j = 0; j < 8 ; j++)
	{
		printf("%c", a[i][j]);
	}
printf("\n");
i++;
}
}
