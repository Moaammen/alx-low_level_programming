#include "main.h"
#include <stddef.h>

/**
*_strspn - function.
*Description: function that gets the length of a prefix substring.
*@s: string.
*@accept: Substring.
*Return: unsigned int.
*/

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept)
{

unsigned int size = 0;

if ((s == NULL) || (accept == NULL))
{
return (0);
}

while (*s && _strchr(accept, *s++))
{
size++;
}
return (size);
}

