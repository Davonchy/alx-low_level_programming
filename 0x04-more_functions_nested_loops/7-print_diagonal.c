#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The number of times to draw diagonal lines.
 */
void print_diagonal(int n)
{
int index;
int gap;
if (n > 0)
{
for (index = 1; index <= n; index++)
{
for (gap = 1; gap <= index; gap++)
_putchar(' ');
_putchar('\\');
if (index == n)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
