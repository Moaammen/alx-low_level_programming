#ifndef MAIN_H
#define MAIN_H




/**
*create_array - unction that creates an array of chars,
*and initializes it with a specific char.
*@size: integer.
*@c: character.
*Return: pointer to memory address.
*/
char *create_array(unsigned int size, char c);

/**
*_strdup - function that returns a pointer
*to a newly allocated space in memory, which contains
*a copy of the string given as a parameter.
*@str: string.
*Return: a pointer to the duplicated string.
*/

char *_strdup(char *str);

/**
*str_concat -  function that concatenates two strings.
*@s1: string.
*@s2: string.
*Return: a pointer to the concatenate strings.
*/

char *str_concat(char *s1, char *s2);

/**
*alloc_grid - function that returns a pointer to a 2 dimensional array of integers
*@width: integer.
*@height: integer.
*Return: a pointer to a 2 dimensional array of integers.
*/

int **alloc_grid(int width, int height);

/**
*free_grid - unction that frees a 2 dimensional grid previously
*created by your alloc_grid function
*@grid: pointer of pointer of array.
*@height: integer.
*Return: no return.
*/
void free_grid(int **grid, int height);

#endif
