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
*_strpbrk - function.
*Description: function that searches a string for any of a set of bytes.
*@s: string.
*@accept: substring.
*Return: a pointer to the byte in s that matches of the bytes in accept
* or NULL if no byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
if ((s == NULL) || (accept == NULL))
{
return (NULL);
}
while (*s)
{

if (_strchr(accept, *s))
{
return (s);
}
else
{
s++;
}
}
return (NULL);
}
