#ifndef MAIN_H
#define MAIN_H

/**
*_putchar - function print charcter.
*@c: character.
*Return: 0 success.
*/

int _putchar(char c);

/**
*_puts_recursion - Function.
*Description: function that prints a string, followed by a new line.
*@s: character
*Return: 0 success.
*/

void _puts_recursion(char *s);

/**
* _print_rev_recursion - print string in reverse
* @s: string to print
*/

void _print_rev_recursion(char *s);

/**
* _strlen_recursion - return string length
* @s: string
* Return: string length
*/

int _strlen_recursion(char *s);

/**
* factorial - find factorial of n
* @n: number
* Return: factorial of number, -1 if negative n
*/

int factorial(int n);

/**
* _pow_recursion - raise x to power y
* @x: number
* @y: power to raise to
* Return: power of a number, -1 if power less than 0
*/

int _pow_recursion(int x, int y);

/**
* find_root - find square root of n, starting from the smallest possible, 0
* @n: n
* @root: test this root
* Return: natural square root, or -1 if not natural root
*/

int find_root(int n, int root);

/**
* _sqrt_recursion - find natural square root of n
* @n: n
* Return: natural square root, or -1 if not natural root
*/

int _sqrt_recursion(int n);

/**
* is_prime - recursively divide by higher divisor, skip even nums
* @n: number to check if prime
* @divisor: divisor
* Return: 1 if prime, 0 if not, or recursive function call
*/

int is_prime(int n, int divisor);

/**
* is_prime_number - check if prime
* @n: number to check
* Return: 1 if prime, 0 if not
*/

int is_prime_number(int n);

#endif
