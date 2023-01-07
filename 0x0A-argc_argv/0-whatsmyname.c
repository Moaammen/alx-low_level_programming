#include <stdio.h>

/**
*main - entry point
*Description: print program name using argv
*@argc: integer for arg count.
*@argv: array of string.
*Return: 0 SUCCESS.
*/


int main(int argc, char *argv[])

{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);

}
