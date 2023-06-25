#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array of integers
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
int i;
int temp;
for (i = 0; i < n; i++)
{
temp = a[i];
a[i] = a[n - 1];
a[n - 1] = temp;
n--;
}
}
