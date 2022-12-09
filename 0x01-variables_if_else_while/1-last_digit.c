#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Description: return the last digit
 *
 *Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
int ld = n % 10;
if(ld > 5 && ld != 0)

{

printf("Last digit of %d is %d and is greater than 5\n" ,n,ld);

}

else if(ld != 0 && ld < 6)

{

printf("Last digit of %d is %d and is less than 6 and not 0\n" ,n,ld);

}

else if(ld == 0)

{

printf("Last digit of %d is %d and is 0\n" ,n,ld);

}
	return (0);
}
