#iclude "main.h"

/**
 * main - function
 * Description: change all lowercase letters to uppercase letters
 * @str: string
 * Return: uppercase characters
 */

char *string_toupper(char *str)
{
int i = 0;

while (s[i] != '\0')
{

if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
i++;
}
return (str);
}
