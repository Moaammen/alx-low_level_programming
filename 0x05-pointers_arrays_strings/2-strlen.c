#include "main.h"

/**
 * _strlen - function print string length
 * @s: character
 * Return: length Success
 */

int _strlen(char *s)
{
int counter = 0;

while (*s != '\0')
{
counter++;
s++;
}
return (counter);
}
