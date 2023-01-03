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

int i = 0;
if ((haystack == NULL) || (needle == NULL))
{

return (NULL);

}

while (*haystack != '\0')

{

if (haystack[i] == needle[0])

{

return (haystack);

}

haystack++;
i++;
}

return (NULL);

}
