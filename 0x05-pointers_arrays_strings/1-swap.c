#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * swap_int - swaps the values of two integers.
 * @a: the first variable with the first value
 * @b: the second variable to swap.
 *
 * Return:
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
return;
}
