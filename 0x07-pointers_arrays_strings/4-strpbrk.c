#include "main.h"
#include <stddef.h>

char *_strchr(char *s, char c);

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
char *result;
if ((s == NULL) || (accept == NULL))
{
result = NULL;
}

while (*s)
{

if (_strchr(accept, *s))
{
*result = *s;
result++;
}
else
{
s++;
}
}
return (result);
}
