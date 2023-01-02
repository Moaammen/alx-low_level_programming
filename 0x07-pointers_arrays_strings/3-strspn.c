#include "main.h"
#include <stddef.h>

/**
*_strchr - Function.
*Description: function that locates a character in a string.
*@s: String.
*@c: Charcter.
*Return: Pointer pointer to the first occurrence of the character c.
*/

char *_strchr(char *s, char c)

{
while (*s != c && *s != '\0')
{
	s++;
}

if (*s == c)

{
	return (s);
}
else
{
	return (NULL);
}
}

/**
*_strspn - function.
*Description: function that gets the length of a prefix substring.
*@s: string.
*@accept: Substring.
*Return: unsigned int.
*/

unsigned int _strspn(char *s, char *accept)
{

unsigned int size = 0;

if ((s == NULL) || (accept == NULL))
{
return (size);
}

while (*s && _strchr(accept, *s++))
{
size++;
}
return (size);
}

