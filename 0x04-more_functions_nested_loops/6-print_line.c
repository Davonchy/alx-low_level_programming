#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: The numbers of times to draw.
 */
void print_line(int n)
{
int count;
if (n > 0)
{
for (count = 1; count <= n; count++)
_putchar('_');
}
_putchar('\n');
}
