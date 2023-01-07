#include <stdio.h>

/**
*main - Entry point.
*Description: program that prints the number of arguments passed into it.
*@argc: integer.
*@argv: array of strings.
*Return: number of arguments.
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
printf("%d\n", (argc - 1));
return (0);
}
