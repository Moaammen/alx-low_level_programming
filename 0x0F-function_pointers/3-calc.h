#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
}
op_t;

/**
*op_add - function sum two integer
*@a: integer
*@b: integer
*Return: the sum 
*/
int op_add(int a, int b);
/**
*op_sub - function subtract two integer
*@a: integer
*@b: integer
*Return: the sub 
*/
int op_sub(int a, int b);
/**
*op_sub - function mul two integer
*@a: integer
*@b: integer
*Return: Result 
*/
int op_mul(int a, int b);
/**
*op_sub - function div two integer
*@a: integer
*@b: integer
*Return: Result 
*/
int op_div(int a, int b);
/**
*op_sub - function mod two integer
*@a: integer
*@b: integer
*Return: Result 
*/
int op_mod(int a, int b);

/**
* get_op_func - get ops function pointer of type char array
* that accepts two inputs of int data type
* @s: a character pointer pointing to a symbol from the program argument
* Return: one of the operator functions to perform calculations
*/

int (*get_op_func(char *s))(int, int);

#endif