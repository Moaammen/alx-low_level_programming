#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
*main - Entry point.
*@argc: argument number
*@argv: arguments
*Return: 0 success.
*/

int main (int argc, char *argv[])

{
int n1, n2;
int (*f)(int, int);

if (argc != 4)
{
printf("Error\n");
exit (98);
}
n1 = atoi[1];
n2 = atoi[3];
f = get_op_func(argv[2]);

if ((f == NULL) || (argv[2][1] != '\0'))
{
printf("Error\n");
exit (99);
}

if ((argv[2] == '\') || (argv[2] == '%') && (argv[3][0] == '0'))
{
printf("Error\n");
exit (100);
}

printf("%d\n", f(n1, n2));

return (0);

}
