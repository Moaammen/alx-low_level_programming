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
int i, j = 0;
char *ptr;
char *s3;

if ((s1 == NULL) || (s2 == NULL))
{
return ('\0');
}

else
{
s3 = strcat(s1, s2);
i = strlen(s3);

ptr = malloc(i + 1 * sizeof(char));

if (ptr == NULL)
{
return (NULL);
}

while (j <= i)
{

ptr[j] = s3[j];

j++;

}
}
return (ptr);
}
