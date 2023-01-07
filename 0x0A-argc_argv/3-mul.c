#include <stdio.h>
#include <stdlib.h>

/**
*main - entry point.
*Description: program that multiplies two numbers.
*@argc: integer.
*@argv: array of strings.
*Return: number of arguments.
*/

int main(int argc, char *argv[])
{
	int numb1;

	int numb2;

	int mul;

if (argc == 3)
{
	numb1 = atoi(argv[1]);

	numb2 = atoi(argv[2]);

	mul = (numb1 * numb2);

	printf("%d\n", mul);
}

else
{

	printf("Error\n");

}

return (0);

}
