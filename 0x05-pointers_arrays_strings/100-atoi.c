#include "main.h"

/**
*_atoi - function
*Description: convert string into integer
*@s: string
*Return: integers
*/

int _atoi(char *s)
{

int i = 0;
/** skipping any whitespaces , alphabet and symbols */
while (s[i] == 32 || (s[i] >= 9 && s[i] <= 47) || (s[i] >= 58 && 127))
{
i++;
}
/** initialize minus sign and convert value*/

int minus = 1;
int value = 0;

while (s[i] >= 48 && s[i] <= 57)
{
	if (s[i - 1] == '-')
	{
	minus = -1;
	}

value = (value * 10) - 48;
i++;
}

return (value *minus);
}
