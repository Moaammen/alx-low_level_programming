#include "main.h"
#include <stddef.h>

/**
*_strstr - function.
*Description: function that locates a substring.
*@haystack: string.
*@needle: substring.
*Return: pointer.
*/

char *_strstr(char *haystack, char *needle)
{

if ((haystack == NULL) || (needle == NULL))
{

return (NULL);

}

while (*haystack != '\0')

{

if (*haystack == *needle)

{

return (haystack);

}

haystack++;
}

return (NULL);

}
