#ifndef MAIN_H
#define MAIN_H

/**
*_putchar - function print charcter.
*@c: character.
*Return: 0 success.
*/

int _putchar(char c);

/**
*_memset - function that fills memory with a constant byte.
*@s: pointer to memory area.
*@b: charcter.
*@n: integer.
*Return: pointer.
*/

char *_memset(char *s, char b, unsigned int n);

/**
*_memcpy - function that copies memory area.
*@dest: array
*@src: array
*@n: integer
*Return: pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n);

#endif
