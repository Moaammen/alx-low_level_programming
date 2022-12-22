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
 * *_strcat - function
 * Description: concatenate two string
 * @dest: string
 * @src: string
 * Return: apointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest + _strlen(dest);

while (*src != '\0')
{
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}
