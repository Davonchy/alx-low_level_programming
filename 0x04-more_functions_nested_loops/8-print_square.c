#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: The size of the square to print.
 */
void print_square(int size)
{
int len;
int breadth;
if (size > 0)
{
for (len = 0; len < size; len++)
{
for (breadth = 0; breadth < size; breadth++)
_putchar('#');
if (len == size - 1)
continue;
_putchar('\n');
}
_putchar('\n');
}
}
