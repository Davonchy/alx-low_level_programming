#include "main.h"

/**
 * print_diagonal - draw diagonal line on the terminal
 * ending with a new line
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
int line, space;
if (n > 0)
{
for (line = 0; line < n; line++)
{
for (space = 0; space < line; space++)
_putchar(' ');
_putchar('\\');
if (line == n - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
