#include "main.h"

/**
*_memset - function
*Description: function that fills memory with a constant byte.
*@s: pointer to memory area.
*@b: character.
*@n: integer.
*Return: pointer.
*/

char *_memset(char *s, char b, unsigned int n)

{
unsigned int index;

for (index = 0; index < n; index++)
{

s[index] = b;

}

return (s);

}

