#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS


/**
*print_name - Function print name.
*@name: pointer to string.
*@f: pointer to funtion that print name.
*Return: 0 Success.
*/
void print_name(char *name, void (*f)(char *));

#endif
