#include <stdio.h>
#include <stdlib.h>
#include "main.h"



/**
*create_array - unction that creates an array of chars,
*and initializes it with a specific char.
*@size: integer.
*@c: character.
*Return: pointer to memory address.
*/
char *create_array(unsigned int size, char c)

{

char *ptr;
int i;
if (size == 0)
	return (NULL);

else
{
ptr = malloc(size * sizeof(char));
if (ptr == NULL)
	{

	return(1);

	}

	while (size > 0)

	{

	ptr[i] = c;

	i++;
	size--;

	}
}

return (ptr);
}

