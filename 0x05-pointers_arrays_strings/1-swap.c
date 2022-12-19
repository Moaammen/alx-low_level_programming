#include "main.h"

/**
 * swap_int - function swap value
 * @a: integer
 * @b: integer
 *Return: 0 success
 */

void swap_int (int *a, int *b)
{
int bridge;
bridge = *a;
*a = *b;
*b = bridge;
}
