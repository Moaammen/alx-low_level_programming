#include "main.h"



/**
 *_abs - function return the abslout value of int
 *
 *Description: Return the abslout value of n
 *@n: integer
 *Return: 0 Success
 *
 */
int _abs(int n)
{
if (n < 0)
{
int result = n * -1;
return (result);
}
else
{
return (n);
}
}
