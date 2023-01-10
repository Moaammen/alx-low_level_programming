#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
*_strdup - function that returns a pointer
*to a newly allocated space in memory, which contains
*a copy of the string given as a parameter.
*@str: string.
*Return: a pointer to the duplicated string.
*/

char *_strdup(char *str)

{
int i, j = 0;
char *ptr;
if (str == NULL)
{
return (NULL);
}
else
{
i = strlen(str);

ptr = malloc(i + 1 *sizeof(char));

if (ptr == NULL)
{
return (NULL);
}

while (j <= i)
{
ptr[j] = str[j];

j++;
}

}
return (ptr);
}
