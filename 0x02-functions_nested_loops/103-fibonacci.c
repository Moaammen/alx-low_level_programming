#include <stdio.h>

/**
*main - entry point
*Description:program that finds and prints the sum of the even-valued terms
*Return: 0 success
*/

int main(void)
{
	int a1 = 1;
	int b1 = 2;
	int total = 0;
	int c1;

	while (b1 < 4000000)
	{
		if (b1 % 2 == 0)
			total += b1;
		c1 = b1;
		b1 += a1;
		a1 = c1;
	}
	printf("%d\n", total);
	return (0);
}
