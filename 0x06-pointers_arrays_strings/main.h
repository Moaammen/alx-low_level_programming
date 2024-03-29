/**
 * _putchar: function print character
 */

int _putchar(char c);

/**
 * _strlen: function find lenght of string
 */

int _strlen(char *s);

/**
 * *_strcat: function concatenates two strings
 */

char *_strcat(char *dest, char *src);

/**
 * *_strncat: function concatenates string wiht specific characters from another string
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy: function copy string
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp: function compare two string
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array: function reverse array
 */
void reverse_array(int *a, int n);

/**
 * *string_toupper: function change lowercase letters to uppercase letter
 */
char *string_toupper(char *str);

/**
*cap_string: function capitalize first character of word
*/
char *cap_string(char *s);
/*
* leet - encode string into 1337 leet
*/
char *leet(char *s);
/**
 * rot13 - traslate an array of chars to ROT13
 * @arr: An array of chars
 * Return: Translated array
 */
char *rot13(char *arr);
