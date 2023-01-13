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
char *ptr;
int *ptr1;
unsigned int i;

if ((nmemb <= 0) || (size <= 0))
	return (NULL);


if (size == 1)
{

ptr = malloc(nmemb * size);

if (ptr == NULL)
	return (NULL);

for (i = 0; i < nmemb; i++)
{

ptr[i] = '0';

}
return (ptr);
}
else
{
ptr1 = malloc(nmemb * size);

if (ptr1 == NULL)
	return (NULL);

for (i = 0; i < nmemb; i++)
{

ptr1[i] = 0;

}
return (ptr1);
}
}
