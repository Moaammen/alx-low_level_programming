#include "main.h"

/**
 * _strlen - function find lenght of string
 * @s: character
 * Return: lenght of string
 */
int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}
/**
 * *_strncat - function
 * Description: concatenate two string
 * @dest: string
 * @src: string
 * @n: integer
 * Return: apointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest + _strlen(dest);

while (*src < (n + 1))
{
*ptr++ = *src++;
}
*ptr = (n + 1);
return (dest);
}
