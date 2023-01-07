#include <stdio.h>

/**
*main - entry point.
*Description: program that prints all arguments it receives..
*@argc: integer.
*@argv: array of strings.
*Return: number of arguments.
*/
int main(int argc, char *argv)

{

int count;
for (count = 0; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}
