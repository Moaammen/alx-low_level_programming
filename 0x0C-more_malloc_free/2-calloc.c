#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*_calloc - function allocates memory for an array
*@nmemb: integer
*@size: integer
*Return: pointer to the allocated memory or NULL.
*/

void *_calloc(unsigned int nmemb, unsigned int size)

{
void *ptr;

if ((nmemb <= 0) || (size <= 0))
	return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
	return (NULL);

return (ptr);
}
