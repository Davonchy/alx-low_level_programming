#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: The array name
 * @n: The elements of the array.
 */
void print_array(int *a, int n)
{
int i;
int j = n - 1;
for (i = 0; i <= j; i++)
printf("%d, ", a[i]);
printf("\n");
}
