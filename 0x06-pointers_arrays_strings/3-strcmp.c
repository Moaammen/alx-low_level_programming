#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string
 * @s2: string
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' || *s2 != '\0')
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++;
s2++;
}
return (0);
}

