#include "main.h"

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
