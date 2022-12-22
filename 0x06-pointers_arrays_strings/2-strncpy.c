#include "main.h"

/**
 * _strncpy - function
 * Description: function copy characters of string
 * @dest: string
 * @src: string
 * @n: integer
 * Return: copied characters
 */

char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;

while (n > 0)
{
*dest = *src;
dest++;
src++;
}
return (ptr);
}
