#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
*str_concat -  function that concatenates two strings.
*@s1: string.
*@s2: string.
*Return: a pointer to the duplicated string.
*/
char *str_concat(char *s1, char *s2)

{
int i = 0, j = 0, len1 = 0, len2 = 0;
char *ptr;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

len1 = strlen(s1);
len2 = strlen(s2);
ptr = malloc((len1 + len2 + 1) * sizeof(char));

if (ptr == NULL)
{
return (NULL);
}
while (i < len1)
{
*(ptr + i) = *(s1 + i);
i++;
}
while (j <= len2)
{
*(ptr + i) = *(s2 + j);
i++;
j++;
}
return (ptr);
}
