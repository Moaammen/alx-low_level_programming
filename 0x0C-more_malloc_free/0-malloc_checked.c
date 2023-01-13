#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*malloc_checked - Function allocated memory.
*@b: integer.
*Return: pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b)

{

void *ptr;

ptr = malloc(b);

if (ptr == NULL)
{
return (98);
}

else 
return (ptr);

}
