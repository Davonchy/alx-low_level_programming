#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The number of times to print diagonal lines.
 */
void print_diagonal(int n)
{
int index;
int gap;
if (n > 0)
{
for (index = 0; index < n; index++)
{
for (gap = 0; gap < index; gap++)
_putchar(' ');
_putchar('\\');
if (index == n - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
