#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS
#include <stddef.h>


/**
*print_name - Function print name.
*@name: pointer to string.
*@f: pointer to funtion that print name.
*Return: 0 Success.
*/
void print_name(char *name, void (*f)(char *));

/**
*array_iterator -  function that executes a function given as a
*parameter on each element of an array.
*@array: array of integers.
*@size: integer.
*@action: pointer to function take ine parmeter.
*Return: 0 success.
*/
void array_iterator(int *array, size_t size, void (*action)(int));



#endif
