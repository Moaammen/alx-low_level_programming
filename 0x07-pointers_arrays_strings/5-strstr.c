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
char *temphaystack;
char *tempneedle;
if ((haystack == NULL) || (needle == NULL))
{

return (NULL);

}

while (*haystack != '\0')

{
temphaystack = haystack;
tempneedle = needle;

while (*haystack != '\0' && *tempneedle != '\0' && *haystack == *tempneedle)
{
haystack++;
tempneedle++;
}
if (!*tempneedle)
return (temphaystack);
haystack = temphaystack + 1;
}
return (0);

}
