#ifndef MAIN_H
#define MAIN_H



 /**
*malloc_checked - Function allocated memory.
*@b: integer.
*Return: pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b);

/**
*string_nconcat - function that concatenates.
*@s1: string.
*@s2: string.
*@n: integer.
*Return:  returned pointer shall point to a newly allocated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
*_calloc - function allocates memory for an array
*@nmemb: integer
*@size: integer
*Return: pointer to the allocated memory or NULL.
*/

void *_calloc(unsigned int nmemb, unsigned int size);

#endif
