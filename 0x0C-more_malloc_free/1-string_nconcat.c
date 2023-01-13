#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
*string_nconcat - function that concatenates.
*@s1: string.
*@s2: string.
*@n: integer.
*Return:  returned pointer shall point to a newly allocated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
unsigned int i, count, j, count1;
char *newstr;
if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";

if (n < 0)
	return (NULL);

i = strlen(s1);
j = strlen(s2);

if (j < n)
	n = j;


newstr = malloc((i + n + 1) * sizeof(char));

if (newstr == NULL)
	return (NULL);

for (count = 0; count < i; count++)
{

newstr[count] = s1[count];

}

for (count1 = 0; count1 < n; count1++)
{

newstr[count] = s2[count1];

count++;

}
newstr[count + 1] = '\0';
return (newstr);
}
