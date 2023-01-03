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

/**
*_strchr - Function.
*Description: function that locates a character in a string.
*@s: String.
*@c: Charcter.
*Return: Pointer pointer to the first occurrence of the character c.
*/

char *_strchr(char *s, char c);

/**
*_strspn - function.
*Description: function that gets the length of a prefix substring.
*@s: string.
*@accept: Substring.
*Return: unsigned int.
*/

unsigned int _strspn(char *s, char *accept);

/**
*_strpbrk - function.
*Description: function that searches a string for any of a set of bytes.
*@s: string.
*@accept: substring.
*Return: a pointer to the byte in s that matches of the bytes in accept
* or NULL if no byte is found.
*/

char *_strpbrk(char *s, char *accept);

#endif
