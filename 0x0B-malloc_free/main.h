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



#endif
