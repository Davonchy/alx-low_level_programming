#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line.
 *
 * @#: character to be printed as triangle
 * size: size of triangles
 */
void print_triangle(int size)
{
int base, height;
if (size > 0)
{
for (base = 1; base <= size; base++)
{
for (height = size - base; height > 0; height--)
_putchar(' ');
for (height = 0; height < base; height++)
_putchar('#');
if (base == size)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
